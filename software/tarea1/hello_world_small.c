#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Definiciones de las direcciones base
#define BUTTONS_BASE 0x00000000 // Dirección base de los botones
#define SWITCHES_BASE 0x00000000 // Dirección base de los switches
#define DISPLAY_BASE 0x00000000  // Dirección base de los displays
#define TIMER_BASE 0x00000000    // Dirección base del temporizador

// Variables globales
int hora_actual = 0;
int minuto_actual = 0;
int hora_alarma = 0;
int minuto_alarma = 0;
int alarma_activada = 0;
int modo_configuracion = 0; // 0: hora, 1: alarma

// Función para convertir un número en una representación de display de 7 segmentos
unsigned char numero_a_display(int numero) {
    switch (numero) {
        case 0: return 0x3F; // 0
        case 1: return 0x06; // 1
        case 2: return 0x5B; // 2
        case 3: return 0x4F; // 3
        case 4: return 0x66; // 4
        case 5: return 0x6D; // 5
        case 6: return 0x7D; // 6
        case 7: return 0x07; // 7
        case 8: return 0x7F; // 8
        case 9: return 0x6F; // 9
        default: return 0x00; // Default (off)
    }
}

// Función para actualizar los displays con la hora y minutos
void actualizar_display(int hora, int minuto) {
    int hora_decena = hora / 10;
    int hora_unidad = hora % 10;
    int minuto_decena = minuto / 10;
    int minuto_unidad = minuto % 10;

    // Enviar datos a los displays
    IOWR_ALTERA_AVALON_PIO_DATA(DISPLAY_BASE, numero_a_display(hora_decena)); // Display de la hora - decena
    IOWR_ALTERA_AVALON_PIO_DATA(DISPLAY_BASE + 1, numero_a_display(hora_unidad)); // Display de la hora - unidad
    IOWR_ALTERA_AVALON_PIO_DATA(DISPLAY_BASE + 2, numero_a_display(minuto_decena)); // Display de los minutos - decena
    IOWR_ALTERA_AVALON_PIO_DATA(DISPLAY_BASE + 3, numero_a_display(minuto_unidad)); // Display de los minutos - unidad
}

// Función para manejar la interrupción del temporizador
void manejar_interrupcion_timer() {
    // Limpia la interrupción del temporizador
    IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_BASE, 0);

    // Incrementa el minuto si el switch de conteo está activo
    if (IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE) & 0x08) {
        minuto_actual++;
        if (minuto_actual >= 60) {
            minuto_actual = 0;
            hora_actual++;
            if (hora_actual >= 24) {
                hora_actual = 0;
            }
        }
    }

    // Verifica si la hora actual coincide con la alarma
    if (alarma_activada && hora_actual == hora_alarma && minuto_actual == minuto_alarma) {
        // Activar la alarma (sonido y LEDs)
        // Implementa la lógica para encender el buzzer y los LEDs aquí
    }

    actualizar_display(hora_actual, minuto_actual);
}

int main() {
    // Configura el temporizador
    IOWR_ALTERA_AVALON_TIMER_CONTROL(TIMER_BASE, 0x07); // Configura el temporizador
    IOWR_ALTERA_AVALON_TIMER_PERIODH(TIMER_BASE, 0x00);
    IOWR_ALTERA_AVALON_TIMER_PERIODL(TIMER_BASE, 0xFFFF); // Establece el período

    // Configura el manejador de interrupciones
    // Asocia el manejador de interrupciones del temporizador (esto debe ser configurado según el entorno de desarrollo)

    while (1) {
        int botones = IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE);
        int switches = IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE);

        // Manejo de botones
        if (botones & 0x01) { // Button 1
            hora_actual++;
            if (hora_actual >= 24) {
                hora_actual = 0;
            }
        }
        if (botones & 0x02) { // Button 2
            hora_actual--;
            if (hora_actual < 0) {
                hora_actual = 23;
            }
        }
        if (botones & 0x04) { // Button 3
            minuto_actual++;
            if (minuto_actual >= 60) {
                minuto_actual = 0;
            }
        }
        if (botones & 0x08) { // Button 4
            minuto_actual--;
            if (minuto_actual < 0) {
                minuto_actual = 59;
            }
        }

        // Manejo de switches
        if (switches & 0x01) { // Switch 1
            alarma_activada = !alarma_activada;
        }
        if (switches & 0x02) { // Switch 2
            modo_configuracion = !modo_configuracion;
            if (modo_configuracion == 0) {
                // Configuración de la hora actual
                hora_actual = 0;
                minuto_actual = 0;
            } else {
                // Configuración de la alarma
                hora_alarma = 0;
                minuto_alarma = 0;
            }
        }
        if (switches & 0x04) { // Switch 3
            // Inicia el conteo de minutos (esto se maneja en la interrupción del timer)
        }
        if (switches & 0x08) { // Switch 4
            // Cambia el interruptor (esto es una función adicional que debes definir)
        }

        // Actualiza el display
        actualizar_display(hora_actual, minuto_actual);

        // Agrega un pequeño retraso para evitar el uso excesivo de la CPU
        usleep(100000); // 100 ms
    }

    return 0;
}
