Comment j'ai mesuré (Methodology)

Pour savoir lequel est le plus rapide, j'ai utilisé un petit chronomètre intégré à l'ordinateur qui s'appelle clock(). J'ai pris l'heure au début et l'heure à la fin de chaque étape du code (quand on prépare les données, quand on les calcule, et quand on donne le résultat). Ensuite, j'ai fait une soustraction pour savoir combien de temps s'est écoulé. J'ai divisé ce chiffre par CLOCKS_PER_SEC pour transformer les "battements" de l'ordinateur en secondes normales.

La différence que j'ai vue (Performance)

La différence est énorme ! L'algorithme Naïf (le premier, pas optimisé) a mis environ 3 secondes pour finir. C'est lent, on a le temps de le voir.
L'algorithme Single-pass (celui qui fait tout en un seul passage) a mis seulement 0,0001 seconde.
C'est environ 23 000 fois plus rapide ! C'est comme comparer un escargot à une fusée. Cela montre que la façon dont on écrit le code change tout.

Temps et Énergie (Energy)

Plus un ordinateur travaille longtemps, plus il consomme d'électricité. C'est logique : si ton processeur tourne à fond pendant 3 secondes, il "mange" de l'énergie et il chauffe.
Avec le code optimisé qui finit en un clin d'œil, l'ordinateur s'arrête de travailler presque tout de suite et se remet en mode "repos". C'est super pour la planète (Green IT) car on gaspille beaucoup moins d'électricité pour faire exactement le même travail. On appelle ça le "Race to Sleep" : finir le travail le plus vite possible pour que l'ordi puisse "s'endormir" et économiser de la batterie.