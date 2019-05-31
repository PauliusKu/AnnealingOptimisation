# Annealing optimisation

# Atkaitinimo modeliavimo algoritmas

Šiame darbe analizuojamas Atkaitinimo (angl. annealing) modeliavimo metodas. Sukurta šį
metodą įgyvendinantį C++ programa. Pilną programinį kodą galima rasti
https://github.com/PauliusKu/AnnealingOptimisation

## Metodo pristatymas

Atkaitinimo modeliavimo (AM) metodo ištakos slypi statistinėje mechanikoje, tiksliau, energetinių
procesų, vykstančių sistemose, sudarytose iš didelio skaičiaus dalelių (atomų), imitavime. Šio
imitavimo idėja yra ta, jog iš pradžių sistema „pervedama“ į didelės energijos būseną, o po to,
palengva mažinant energiją, stengiamasi pasiekti būseną, atitinkančią žemiausią (optimalų) sistemos
energijos lygį — tarsi (kietas) fizikinis kūnas būtų įkaitintas iki pakankamai aukštos temperatūros, o
paskui, jį atkaitinant (atšaldant), t.y. mažinant temperatūrą, jis būtų savotiškai užgrūdinamas.

Tai metaeuristinis optimizavimo metodas, kuris:

1. Yra įkvėptas gamtos procesų,
2. Turi ir lokalios ir globalios paieškos savybių,
3. Yra vieno sprendinio, t.y kiekviena iteracija tobulina esamą sprendimą.

## Pseudo kodas

_Input s, iMax, T, decrT_

_For i = 0 to iMax:_

_sNew ← neighbour()_

_If P(E(s), E(sNew), T) ≥ random(0, 1):_

_s ← sNew_

_T ← newTemperature(T, decrT)_

_Output: s_

## Naujo kaimyno parinkimas

Naujas kaimynas sNew randamas atsitiktinai apribotame intervale. Mūsų įgyvendintame algoritme
naujas kaimynas visiškai nepriklauso nuo senojo.

_Input min, max_

_sNew ← rand(min, max)_

_Output: sNew_

## Temperatūros apskaičiavimas

Nauja temperatūra apskaičiuojama pasitelkiant mažinimo daugiklį (būtinai [0, 1]).

_Input T, decrT_

_newT ← T * decrT_

_Output: newT_

## Energijos apskaičiavimas

Nauja energija randama tiesiog įsistatant skaičius į testuojamą funkciją.


## Perėjimo tikimybės skaičiavimas

Apskaičiuojama tikimybė:

1. Kai naujoji energija mažesnė už senąją (E-newE > 0), gauname 1.
2. Kai naujoji energija nėra mažesnė už senąją, gauname (0, 1)

_Input E, newE, T_

_prob ← e(E-newE)/T_^

_Output: prob_
