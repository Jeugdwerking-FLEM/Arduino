---
layout: default
title: Geheugenspelletje
parent: Projectjes
nav_order: 1
#has_children: true
---

## Geheugenspelletje

Test je geheugen met dit simpel spelletje! Je onthoudt het patroon van LEDjes die oplichten waarna je het met de drukknoppen herhaalt. Elke keer je juist bent wordt het patroon met één stap uitgebreid. Hoe ver geraak jij voor je een fout maakt?

De schakeling is hieronder weergegeven en de code is [hier](https://github.com/Jeugdwerking-FLEM/introductie-arduino/tree/main/code-projectjes/geheugenspelletje) terug te vinden.

![image](https://github.com/Jeugdwerking-FLEM/arduino/blob/main/code-projectjes/geheugenspelletje/geheugenspelletje_schakeling.png?raw=true)

In deze code wordt er veel gebruik gemaakt van *for loops*, zoals:

```cpp
for (int x = 0; x < 4; x++) {
    digitalWrite(ledPin[x], LOW);  // alle LEDs uit
    }
```

Alles binnen de accolades wordt vier keer uitgevoerd: eerst eens voor *x=0*, dan voor *x=1*, *x=2* en tenslotte *x=3*. De waarde voor x start dus bij nul (`int x = 0`), er wordt elke keer de loop wordt uitgevoerd één bij x opgeteld (`x++`) en x blijft steeds kleiner dan 4 (`x < 4`). Na *x=3* komt *x=4*, waarbij de for loop gedaan is want er wordt niet meer aan de voorwaarde dat x kleiner dan 4 moet zijn voldaan.


Enkele manieren waarop je het spelletje kunt uitbreiden:
- Zorg ervoor dat elk level de snelheid waarmee de volgorde wordt weergegeven wordt verhoogd.
- Voeg een buzzer toe.
- Voeg een startknop toe, het spel start niet meteen maar pas na het indrukken van de knop. Deze knop kan ook dienen om het spel te resetten!
