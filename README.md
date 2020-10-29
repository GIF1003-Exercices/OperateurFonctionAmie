# operateurFriendOuMembre
## Comparaison de deux constructions de l'opérateur ==

Le C++ permet de définir le comportement de certains opérateurs pour des instances d'une classe.
On peut faire cela de deux manières: soit en définissant l'opérateur comme une fonction amie, soit en définissant l'opérateur comme un membre de la classe.  
Pour certains opérateurs, l'opérateur d'affectation par-exemple,  il est nécessaire d'utiliser une fonction membre. Pour d'autres il y a un choix.
Dans ce projet on illustre un avantage d'utiliser une fonction amie lorsque l'opérateur est symmétrique.  Cet avantage survient lorsque l'objet peut être
construit par conversion implicite.
Dans l'expression suivante:

int a ;
double x = a + 3.0 ; 

La variable a est convertie implicitement en double lorsque l'expresion est évaluée.  De même, la comparaison suivante:

bool egal = ( x == 3) ; 

Pour pouvoir évaluer cette expression le littéral 3 a été implicitement converti en double par le compilateur.  De telles conversions implicites sont aussi 
possibles lorsqu'une instance d'une classe peut être construite à-partir d'un littéral, ce qui survient si le constructeur peut être appelé avec un seul argument
du type du littéral en question.

C'est ce qui est illustré dans la présente démo.  Nos deux classes comparableF et comparableM n'ont en effet qu'un seul membre privé: un entier.  On peut les 
construire avec une valeur littérale entière, par-exemple:

comparableM unObjet(4);
comparableF autreObjet(123);

Il est donc possible, en définissant l'opérateur ==,  de bâtir des expressions comme:

unObjet == autreObjet

Mais intuitivement on voudrait aussi pouvoir utiliser des expressions du type:

unObjet == 4
56 == autreObjet

La deuxième possibilité est malheureusement impossible lorsque l'opérateur == est un membre de la classe.  On peut toutefois bâtir ce type d'expression
lorsque l'opérateur est défini comme fonction amie.

