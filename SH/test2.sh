#!/bin/bash

maFonction() 
{ local varlocal="je suis la fonction"
  echo "$varlocal"
  echo "Nombres de paramètres : $#"
  echo $1
  echo $2
  echo $3
}

maFonction "Hello" "Bim"  "World!"
