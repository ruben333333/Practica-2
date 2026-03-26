Aquesta pràctica consisteix en desenvolupar un sistema de monitorització ambiental d’un CPD utilitzant una ESP32. El sistema recull dades de l’entorn mitjançant sensors analògics: un LM35 per mesurar la temperatura i un LDR per detectar la lluminositat, fent ús de l’ADC per convertir els senyals a valors digitals.

Funcionalitat

El sistema implementa:

Alertes automàtiques: activació d’un LED i avís per sèrie si la temperatura supera els 25 °C o si es detecta llum.
Interacció per port sèrie: comandes per consultar l’estat (STATUS) i apagar el LED (LED_OFF).
Objectiu

Aplicar l’ús d’entrades analògiques, lectura de sensors i lògica de control per construir un sistema bàsic de supervisió en un entorn IoT.
