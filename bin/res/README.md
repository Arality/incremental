# Weapons.json
### Formatting is handled in the following way
~~~
    {
        "name": "Iron Sword",
        "twoHanded": true,
        "damage": 10,
        "speed": 1,
        "slots": 0
    }
~~~
This is where we give our weapon it's name as a string
~~~
"name": "Iron Sword",
~~~
We decide if our weapon is two handed or not as a bool
~~~
"twoHanded": true,
~~~
We set how much damage the weapon does as a number
~~~
"damage": 10,
~~~
The speed of our weapon to adjust dps as a number
~~~
"speed": 1,
~~~
How many card slots the item has
~~~
"slots": 0
~~~
# Armour.json
### Formatting is handled in the following way
~~~
    {
        "name": "Leather Helmet",
        "position": "head",
        "slots": 0
    }
~~~
Here we give our item a name
~~~
"name": "Leather Helmet",
~~~
Here we give our item it's position on the player as a number
~~~
"position": "head",
~~~
Armour has four positions identified by numbers.\
Positions are mapped as follows:
~~~
head
chest
gloves
boots
~~~
How many slots this item has as a number
~~~
"slots": 0
~~~