#include <iostream>
using namespace std;
	int w,x,y,z;
	int angka=0;
    	int mp[100][100];
	int m1[100][100];
	int m2[100][100];
	int (*pm1)[100] = m1;
	int (*pm2)[100] = m2;
void pengurangan(int*);
void input(int*);
void hasil(int*);

int main()
{ 
cout<<endl;
cout<<"  KELAS A " <<endl;
cout<<"  Nama : Cindy (1957051002)	" <<endl;
cout<<"  Nama : Dirga Wira Aditya (1957051011)	" <<endl;	
cout<<"  Nama : Rendy Fitra Adi Pratama (1917051041)	" <<endl;
cout<<"  Nama : Vadella Nikita Ayumi (1917051054)	" <<endl<<endl;

	cout << "Baris matriks pertama : "; cin >> w;
	cout << "Kolom matriks pertama : "; cin >> x;
	cout << "Baris matriks kedua : "; cin >> y;
	cout << "Kolom matriks kedua : "; cin >> z;

	if (w != y && x != z) 
		cout <<"Matriks Error !"<<endl;
	else 
	{ 	input(&angka);
    		for(int i = 0; i < y; i++)
    		{ pengurangan(&i); }
    		cout << "Hasil Pengurangan Matriks: "<<endl;
    		for(int i = 0; i < y; i++)
		{ hasil(&i); cout << endl; }
	}
}
void input (int *in)
{	cout << "Elemen matriks pertama: "<<endl;
    		for(int i = 0; i < w; i++)
    		{
    	 	for(int j = 0; j < x; j++)
     		{ cin >> *(*(pm1+i)+j);	}
}
    	cout << "Elemen matriks kedua: "<<endl;
    		for(int i = 0; i < y; i++)
		{
       		for(int j = 0; j < z; j++)
      		{ cin >> *(*(pm2+i)+j);	}
    		}
}
void pengurangan (int *pen)
	{
		for(int j = 0; j < z; j++)
    		{ *(*(mp+*pen)+j) = *(*(pm1+*pen)+j) - *(*(pm2+*pen)+j);	}
	}
void hasil (int *hs)
	{
		for(int j = 0; j < z; j++)
      		{ cout << *(*(mp+*hs)+j) << "\t";	}
	}
