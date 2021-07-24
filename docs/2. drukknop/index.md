---
layout: default
title: 2. Drukknop
nav_order: 3
---

## De Drukknop

In dit gedeelte leer je een LEDje bedienen met een drukknop. Het type drukknop die wij gaan gebruiken heeft 4 pinnen - A en B zijn altijd verbonden, net als C en D. Je kan dus de pinnen A of B met C of D gebruiken als onderbreking. Wanneer de knop wordt ingedrukt zullen de onderbroken pinnen ook verbinding maken.

![image](photos/drukknop_schema.png)

Maak nu onderstaande schakeling na.

<img src="https://github.com/Jeugdwerking-FLEM/arduino/blob/main/code-2-drukknop/ledje_met_drukknop_schakeling.png?raw=true" width="500"/>

De bijhorende code kan op de Arduino IDE bekomen worden door te gaan naar File > Examples > 02.Digital > Button of kan [hier](https://github.com/Jeugdwerking-FLEM/introductie-arduino/tree/main/code-2-drukknop) bekeken worden. 

De drukknop wordt geïnstatieerd als input en het LEDje als output. De status van de knop wordt ingelezen en in de variabele `buttonState` gestoken. Als deze op 'HIGH' staat, en dus de knop wordt ingedrukt, zal het LEDje branden. Anders niet!
