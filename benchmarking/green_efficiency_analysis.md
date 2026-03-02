Measurement Methodology
Pour savoir quel code est le plus rapide, j'ai utilisé un petit chronomètre dans l'ordinateur qui s'appelle clock(). C'est comme un chrono de sport mais pour le processeur. J'ai pris l'heure au début et l'heure à la fin pour chaque étape : quand on prépare les chiffres (BUILD), quand on fait les calculs (PROCESS) et quand on donne le résultat (REDUCE).

Ensuite, j'ai fait une soustraction (Fin moins Début) pour voir combien de temps ça a pris. J'ai divisé le résultat par CLOCKS_PER_SEC pour transformer les petits battements de l'ordi en secondes normales que l'on peut lire. J'ai aussi utilisé des double pour ne pas avoir juste un "0" comme résultat, parce que le code va super vite.

Observed Performance Differences
La différence est vraiment choquante ! L'algorithme Naïf (le premier que j'ai fait, qui n'est pas optimisé) a mis environ 3,11 secondes pour finir. Pour nous c'est court, mais pour un ordi c'est très long.
L'algorithme Single-pass (celui qui fait tout en un seul passage) a mis seulement 0,0001 seconde.

Si on compare, c'est environ 23 000 fois plus rapide ! C'est comme comparer un escargot avec un avion de chasse. Ça montre bien que même si le résultat final est le même, la façon d'écrire le code change complètement la vitesse de l'ordinateur.

Relation Between Runtime and Energy Consumption
Il y a un lien direct entre le temps et l'électricité. Plus l'ordinateur travaille longtemps, plus il consomme. Si le processeur tourne à fond pendant 3 secondes, il "mange" de l'énergie et il commence à chauffer.

Avec le code optimisé qui finit en un clin d'œil, l'ordinateur s'arrête de travailler presque tout de suite et se remet en mode "dodo" (repos). C'est ça le Green IT : on économise de l'électricité parce qu'on fait le même travail mais beaucoup plus vite. On appelle ça le "Race to Sleep" : on fait la course pour finir le travail et laisser l'ordi se reposer pour économiser la batterie.

Limitations of the Experiment
Mon test n'est pas parfait à 100%. D'abord, j'ai utilisé 50 000 nombres. C'est beaucoup pour moi mais pas assez pour un gros serveur. Si on utilisait des millions de données, l'écart serait peut-être différent.

Aussi, j'ai mesuré le temps du processeur, pas le temps réel avec une montre. Parfois, l'ordi fait d'autres trucs en même temps, ce qui peut changer un peu les chiffres. Enfin, je n'ai pas de machine pour mesurer l'électricité précise, donc je devine que c'est mieux parce que c'est plus rapide, mais je n'ai pas le chiffre exact des Watts.

Practical Engineering Takeaway
Ce que je retiens, c'est qu'être un bon codeur, ce n'est pas juste faire un truc qui "marche". Il faut que ce soit intelligent. Un code bien écrit (en un seul passage) est bien meilleur qu'un ordi puissant avec un mauvais code. Plus tard, quand je ferai des applis, je penserai à ça pour que les téléphones des gens ne chauffent pas et que leur batterie dure plus longtemps. C'est bon pour l'utilisateur et c'est bon pour la planète.