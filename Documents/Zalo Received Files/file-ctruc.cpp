//doc tep co san DL.txt
#include <stdio.h>  //chuan

//-------------- mo ta TYPE---------------
struct SV
	{	char ten[30];
		int tuoi;
		float toan, van; // kich thuoc co dinh
	}; //co ';'
//----------------- main -------------------
int main()
{//main
//-------------- mo ta BIEN ----------------
FILE *f, *g; //FILE : kieu du lieu. *f: con tro den dau file; g : file KETQUA
struct SV sv; // SV khac sv
float w;
//--------------------- mo file READ -------------------
f = fopen ("C:/Users/ADMIN/Desktop/dl.txt", "r");           //file r: doc
if (f == NULL) // sai
	{printf ("Loi doc file du lieu");
	return -1; 
	}
g = fopen ("KETQUA", "w"); // trong cung thu muc
//---------- ghi len file g. Dung WHILE de doc den cuoi file---------
while (fscanf(f,"%s%d%f%f\n", &sv.ten, &sv.tuoi, &sv.toan, &sv.van) != EOF)
      {//while
      w = sv.toan+sv.van)/2;
      if (w<4) 
      	fprintf (g, "Ten: %s co ket qua KEM\n", sv.ten);
      		else if (w > 7) 
      			fprintf (g, "Ten: %s co ket qua TOT\n", sv.ten);
      				else fprintf (g, "Ten: %s co ket qua DAT\n", sv.ten);		  
	  }//while
//-------------------- dong file ---------------------
fclose(f);
fclose (g);
return 0;
} //main
