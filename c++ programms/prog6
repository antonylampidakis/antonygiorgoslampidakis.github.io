#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

const int SZ=300;

class IndustrialProduct{
public:

       //dimioyrgos erimin
       IndustrialProduct(){
            path_construction[0]='\0';
            product_parts[0]='\0';
            code_part[0]='\0';
        }


//dimioyrgos
IndustrialProduct(char _path_construction[], char _product_parts[], char _code_part[])
{

       if(strlen(_code_part)>12)
         {
          cout<<code_part<<"Lathos kodikou"<<endl;
          exit(-1);
         }//exception


       strcpy(path_construction,_path_construction);
       strcpy(product_parts,_product_parts);
       strcpy(code_part,_code_part);

}



      //metodoi getters
      char* getpath_construction(){return path_construction;};
      char* getproduct_parts(){return product_parts;};
      char* getcode_part(){return product_parts;};


      //methodos emfanisis
      void print(ostream& tout)
      {
       tout<<"Production path:"<<getpath_construction()<<endl;
       tout<<"Product's parts:"<<getproduct_parts()<<endl;
       tout<<"Product's code:"<<getcode_part()<<endl;
      };


      //epifortosi telesti gia methodo emfanisis se arxeio
      friend ostream& operator<<(ostream& tout,  IndustrialProduct d)
      {
       tout<<"Production path:"<<d.getpath_construction()<<endl;
       tout<<"Product's parts:"<<d.getproduct_parts()<<endl;
       tout<<"Product's code:"<<d.getcode_part()<<endl;
      };


      //methodos show gia emfanish stoixeion apo ton compiler
      void show()
               {
                cout<<"Production path:"<<path_construction<<endl;
                cout<<"Product's parts:"<<product_parts<<endl;
                cout<<"Product's code:"<<code_part<<endl;
               }

        private:
            char path_construction[SZ];
            char product_parts[SZ];
            char code_part[12];

};


int main()
{
 int g;

 //dimiourgia arxeiou
 ofstream f("IndustrialProduct.txt");

 //dimiourgia antikeimenou
 IndustrialProduct d("tetarto stadio paragogis upoleipontai alla eksi stadia paragogis","dinamo-relai-micro prosseeors","116681915983");

 //apo tin sinartisi print sto arxeio
 d.print(f);

 //emfanisi dedomenon sto DOS
 //cout<<"Production path:"<<d.getpath_construction()<<endl;
 //cout<<"Product's parts:"<<d.getproduct_parts()<<endl;
 //cout<<"Product's code:"<<d.getcode_part()<<endl;

 //h kalontas tin sinartisi show
 d.show();


 //katagrafi ton dedomenon se arxeio tou reumatos f
 //f<<d;
 //f.close();

 cin>>g;
}
