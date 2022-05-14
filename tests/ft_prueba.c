#include<stdio.h>
#include<unistd.h>

void ft_prueba(x,y){
	
	//la y son las filas y la x las columnas
	
	int i;
	i=1;
	int j;
	j=1;

	while(i<=y){
		j=1;
		if(i == 1){
		
			while(j<=x){

				if(j == 1){					
					write(1, "A",1);
				}

				else if(j == x){				
					write(1, "B",1);
				}

				else{
					write(1,"H", 1);
				}

				j++;
			}
		}


		if (i == y){
		
			while(j<=x){

				if (j == 1){					
					write(1, "B",1);
				}

				else if (j == x){				
					write(1, "B",1);
				}

				else{
					write(1,"H", 1);
				}
				j++;
			}		
		}


		else{
		
			while(j<=x){

				if (j == 1){					
					write(1, "H",1);
				}

				else if (j == x){				
					write(1, "H",1);
				}

				else{
					write(1," ", 1);
				}

				j++;
			}
			write(1,"\n",1);
		
		}

		i++;
	
	}

}