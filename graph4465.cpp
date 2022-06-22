#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	bool ketemu,nolsemua;
	int matrix[15][15];
	int i,j,jumlah_vertex,jumlah_edge,sumber,tujuan;
	cout<<"jumlah_vertex : ";
	cin>>jumlah_vertex;
	cout<<"jumlah_edge : ";
	cin>>jumlah_edge;
	
	//pengisisan matrix asal ke tujuan
	for (i=1; i <= jumlah_edge; i++)
	{
		cout<<"vertex_sumber : ";
		cin>>sumber;
		cout<<"vertex_tujuan : ";
		cin>>tujuan;
			matrix[sumber][tujuan];
			matrix[tujuan][sumber];
	}
	
	//keluarannya
	if(nolsemua == true)
	{
		cout<<"Graph tidak terhubung";
	}else{
		cout<<"Graph terhubung";
	}
	
	// untuk membuat matrix
	for(i = 1; i <= jumlah_vertex; i++)
	{
		for(j=1; j <= jumlah_vertex; j++)
	{
		matrix[i][j]=0;
	}
	}
	
	//untuk menemulusi graph dan menentukan isinya tipe bool
	i=1;
	nolsemua=false;
	while(i <= jumlah_vertex && nolsemua == false)
	{
		j=1;
		ketemu=false;
		while(j<=jumlah_vertex && ketemu == false)
		{
			if(matrix[i][j==1])
			{
				ketemu=true;
			}else{
				j++;
			}
		}
		if(ketemu == false)
		{
			nolsemua=true;
		}else{
			i++;
		}
	}
}
