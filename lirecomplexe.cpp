#include <iostream>

// enregistrement complexe
struct complexe
{
  float reelle;		// partie reelle
  float imaginaire;	// partie imaginaire
};

int lireComplexe(struct complexe var1);
int lireComplexe2(struct complexe var2);
int sommeComplexe( struct complexe z, struct complexe var1, struct complexe var2);
int afficherComplexe(struct complexe z);


int main(int argc, char*argv[])
{
  struct complexe z;
  struct complexe var1;
  struct complexe var2;
  
  
  std::cout << "Entrer un nombre complexe z. La partie reelle sera separee d'un espace de la partie imaginaire\n";
  sommeComplexe(z,var1,var2);
  afficherComplexe(z);
  
 return 0;
}

int lireComplexe(struct complexe var1) // un pointeur parce qu'on va recuperer la valeur
{
 
std::cin>> var1->reelle >> var1->imaginaire; 
  return 0;
}
int lireComplexe2(struct complexe var2) // un pointeur parce qu'on va recuperer la valeur
{
 
std::cin>> var2->reelle >> var2->imaginaire; 
  return 0;
}
int sommeComplexe( struct complexe z, struct complexe var1, struct complexe var2)
{

z=lireComplexe(var1)+lirecomplexe2(var2);
return 0;
}
int afficherComplexe(struct complexe z)
{
if (z.imaginaire > 0) std::cout << "z = " << z.reelle << " + i" << z.imaginaire << std::endl;  // affichage du nombre complexe z saisie au clavie
  else std::cout << "z = " << z.reelle << " - i" <<  -1.0*z.imaginaire << std::endl; 
  return 0;
}
