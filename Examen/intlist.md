Question 1 et 2:

Le problème dans le programme réside dans la création d'une boucle infinie (cycle) au sein de la liste chaînée. Cela se produit lors de l'exécution de la ligne :

"head->next->next->next->next = head->next;"


Cette instruction fait en sorte que le dernier élément de la liste pointe vers un élément antérieur, créant ainsi une structure cyclique.
 Lorsque la 'fonction print_list_slow' tente de parcourir la liste, elle entre dans une boucle infinie car le dernier élément pointe vers un élément déjà visité.
 Cette situation entraîne une exécution continue sans terminaison, provoquant une boucle infinie.
 Pour éviter ce problème, il est essentiel de structurer la liste chaînée de manière à ne pas former de cycles involontaires.

Question 3:

Pour détecter si une liste chaînée contient une boucle,
 on peut utiliser l'algorithme du "pointeur rapide et lent"
 (Floyd's cycle-finding algorithm).
 Cet algorithme utilise deux pointeurs, l'un avançant plus rapidement que l'autre, pour détecter la présence de cycles dans une liste. 
 En y ajoutant une fonction'detect_cycle' renverra 'true' si la liste contient une boucle et 'false' sinon.
 Vous pouvez utiliser cette fonction pour détecter la présence de cycles dans votre liste chaînée.


