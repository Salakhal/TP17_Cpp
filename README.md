# TP17 : Organisation modulaire 

Ce TP couvre la modularisation de code en C++ : classes séparées, templates et librairies.

---

## Exercice 1 – Séparer proprement une classe unique

## Description
Ce TP a pour objectif de **séparer proprement une classe C++** en fichiers d'en-tête (`.h`) et d'implémentation (`.cpp`) pour mieux organiser le code.  
L'exemple traité ici est la classe `Point3D` représentant un point dans l'espace à 3 dimensions.


## Fichiers principaux

### `Point3D.h`
- Contient la **déclaration de la classe**.
- Include-guards pour éviter les inclusions multiples.
- Déclare les constructeurs et les accesseurs (`getX`, `getY`, `getZ`).
- Méthode `afficher()` pour afficher les coordonnées.

### `Point3D.cpp`
- Contient la **définition des méthodes** de la classe Point3D.
- Inclut `<iostream>` pour l’affichage et `"Point3D.h"`.

### `main.cpp`
- Crée deux objets `Point3D`.
- Affiche leurs coordonnées.

---

## Sortie attendue
```
Point 1 : (0, 0, 0)
Point 2 : (1.5, 2.5, 3.5)

```
![Uploading image.png…]()


# Exercice 2 – Mini-bibliothèque géométrique

 ## Objectif

Créer une **mini-bibliothèque géométrique 2D** appelée **Geo2D**, composée des classes` Point`, `Segment` et `Triangle`.
L’objectif est d’apprendre à structurer un projet C++ avec des dossiers d’en-têtes et de sources séparés, et à utiliser un Makefile pour automatiser la compilation.

 ## Sortie attendue :


![Uploading image.png…]()

##  Exercice 3 – Création d’une librairie statique (.a) ou partagée (.so)

   ### Objectif

 Créer une **librairie réutilisable** contenant deux classes :

  - **Logger**: gère les journaux (logs) via un **pattern Singleton**

 - **Config** : charge et lit un fichier de configuration simple (JSON / clé=valeur)

Ces classes seront compilées en :

  **librairie statique** `(libutil.a)` .
   **librairie partagée** `(libutil.so)`.

  ## Sortie attendue :

  ![Uploading image.png…]()


   ## Exercice 4 – Classe template et fichier d’en-tête uniquement

  ### Objectif

Créer une **classe template générique** `Matrix<T, N, M>` représentant une matrice de taille fixe.
Toutes les définitions doivent être placées **dans le fichier d’en-tête** `(.h)` pour permettre la compilation des instanciations génériques.

 ## Sortie attendue :

![Uploading image.png…]()

 
