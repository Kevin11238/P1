#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define p printf
#define s scanf

 float internacional,nacional,local, sumai, suman,sumal, subi, subn, subl, pago;
 int opc;
	
   void proga (float internacional,float nacional,float local,float sumai,float suman,float sumal, float subi,float subn, float subl, float pago, int opc){
   
   p("\n\n\t\t\tFDP Telecoms.");
    p("\n\tBienvenido a su sistema de cobro");
    do{
    system("cls");
    p("\n\t Eliga la opcion que desee consultar.");
	p("\n\n\t 1.Internacional. \n\n\t 2.Nacional. \n\n\t 3.local. \n\n\t 4.Mostrar factura. \n\n\t 5.Salir.\n\t ");
    s("%d",&opc);
    system("cls");
    switch (opc){
    	case 1:
    		p("\n\n\tMinutos de llamada internacional: ");
            s("%f", & internacional);
            break;
        case 2:
		    p("\n\tMinutos de llamada nacional: ");
            s("%f", & nacional);
            break;
		case 3:
		    p("\n\tNumero de llamadas locales: ");
            s("%f", & local);
            system("cls");
		    break;
		case 4:
			p("\n\n\t\t\tFDP. Telecoms-Factura.");
            p("\n\tRenta Servicio:$400.00");
    
            p("\n\n\tLlamada internacional: duracion %.0f min.", internacional);
            if (internacional>3){
                sumai=internacional-(3);
                subi=7+(sumai*3);
                p("\n\t  Tarifa base:$7.00, Min. Adicionales:(%.0f min.) $%.2f", sumai, sumai*3);
                p("\n\t\t\t\t\t\t\t Subtotal: $%.2f", subi);
            }
            else 
                if (internacional<=3 && internacional>0){
                    subi=7;
                    p("\n\t  Tarifa base:$7.00, Min. Adicionales:(0 min) $0");
		        	p("\n\t\t\t\t\t\t\t Subtotal:$%.2f", subi);
                }
                else
		            if(internacional<0){
                        p("\n\t Los minutos ingresados son inválidos");
                    }

            p("\n\n\tLlamada nacional: duracion %.0f min.", nacional);
            if (nacional>15){
                suman=nacional-(15);
                subn=1.50+(suman*2);
                p("\n\t  Tarifa base:$1.50, Min. Adicionales:(%.0f min.) $%.2f", suman, suman*2);
                p("\n\t\t\t\t\t\t\t Subtotal: $%.2f", subn);
            }
            else 
                if (nacional<=15 && nacional>0){
                    subn=1.50;
                    p("\n\t  Tarifa base:$1.50, Min. Adicionales:(0 min) $0");
			        p("\n\t\t\t\t\t\t Subtotal:$%.2f", subn);
                }
                else
		            if(nacional<0){
                        p("\n\t Los minutos ingresados son inválidos");
                    }
        
            p("\n\n\tLlamadas locales: %.0f", local);
	            if (local>50){
    	            sumal=local-(50);
    	            subl=sumal*(0.70);
    	            p("\n\t  Tarifa base:$0.00, Min. Llamadas adicionales:(%.0f) $%.2f", sumal, sumal*0.70);
                    p("\n\t\t\t\t\t\t\t Subtotal: $%.2f", subl);
                }
                else
                    if (local<=50 && local>0){
       	                subl=0;
       	                p("\n\t  Tarifa base:$0.00, Llamadas adicionales:(0) $0");
			            p("\n\t\t\t\t\t\t Subtotal:$%.2f", subl);
	                }
	                else
		                if(local<0){
                            p("\n\t Las llamdas ingresadas son inválidas");
                        }
            pago=subi+subl+subn+400;
            p("\n\n\tTotal a pagar = $400+%.2f+%.2f+%.2f = %.2f\n\n\t", subi, subn, subl, pago);
            system("pause");
		    break;
		case 5:
			p("\n\t ¡Hasta luego!");
			}
		}
		while (opc!=5);
	}
	
	int main()
{
    int opcion;
    char repetir = TRUE;
    int i, j, A[12], moda, aprobados=0, reprobados=0, suma=0, suma1=0, becas=0, opc, accion;
	int B[12], posicion=0, pos_mayor=0, numero=0, mayor;
	float media,  varianza, desviacion, a_porcentaje, r_porcentaje;
    
    do {
        system("cls");
        
        
        p ("\n\nMenu de Opciones\n");
        p ("1. Opcion 1 : Programa 1. \n");
        p ("2. Opcion 2 : Programa 2. \n");
        p ("0. SALIR\n");
        
        p ("\nIngrese una opcion: ");
        s ("%d", &opcion);
        
        switch (opcion) {
            case 1:
                  proga (internacional,nacional,local,sumai,suman,sumal,subi,subn,subl,pago,opc);
                system("pause>nul"); 
                break;
                
            case 2:
                {
                		p ("\n\n\t Deme las calificaciones de los sig. alumnos: ");
	for (i=0; i<12; i++){ 	//Para escanear las calificaciones.
		p ("\n\n\t Calificacion del alumno %d: ", i+1);
		s ("%d", &A[i]);
		if (A[i]<0){
			p ("\n\n\t No es posible una calificacion negativa, intente de nuevo: ");
			p ("\n\n\t Calificacion del alumno %d: ", i+1);
			s ("%d", &A[i]);
		}
		else
		if (A[i]>10){
			p ("\n\n\t No es posible una calificacion mayor a 10, intente de nuevo: ");
			p ("\n\n\t Calificacion del alumno %d: ", i+1);
			s ("%d", &A[i]);
		}
	}
	do{
	p ("\n\n\t Los datos proporcionados fueron correctos? Indique el num. : 1)Si	2)No \n\t\t");
	s ("%d", &opc);
	system ("pause");
	system ("cls");
	switch (opc){
		case 1:

			for (i=0; i<12; i++){	//Para el promedio
				suma+=A[i];
			}
			media=(suma/12.0);
			for (i=0; i<12; i++){   //Para Varianza
			suma1+=pow((A[i]-media),2.0);
			}
			varianza= (suma1/12.0);
	
			desviacion=sqrt(varianza);//Para la Desviacion Estandar
			for (i=0; i<12; i++){	//Para la Moda
				B[i]=0;
			}
			for (i=0; i<12; i++){
				numero=A[i];
				posicion=i;
				for (j=0; j<12; j++){
					if (A[j]==numero) 
					B[posicion]++;
				}
			}
			mayor=B[0];
			pos_mayor=0;
			for (i=0; i<12; i++){
				if (B[i]>mayor){
					pos_mayor=i;
					mayor=B[i];
				}
			}
			for (i=0; i<12; i++){	//Alumnos Aprobados y Reprobados
				if(A[i]<6){
					reprobados=reprobados+1;
				}
				else
					aprobados=aprobados+1;
				}	
			a_porcentaje=(aprobados*100)/12.0;
			r_porcentaje=(reprobados*100)/12.0;
	
			for (i=0; i<12; i++){	//Aspirantes a Becas
				if(A[i]>8){
					becas=becas+1;
				}
			}
			p ("\n\n\t Las calificaciones fueron: ");
			p ("\n");
			for (i=0; i<12; i++)
			p ("%2d ,",A[i]);
			p ("\n\n\t Media: %.3f", media);
			p ("\n\n\t Varianza: %.4f", varianza);
			p ("\n\n\t Desviacion Estandar: %f ", desviacion);
			p ("\n\n\t La Moda es el num. : %d ", A[pos_mayor]);
			p ("\n\n\t El num total de alumnos aprobados son: %d (%.2f %).", aprobados, a_porcentaje);
			p ("\n\n\t El num total de alumnos reprobados son: %d (%.2f %).", reprobados, r_porcentaje);
			p ("\n\n\t Alumnos totales aspirantes a becas: %d", becas);
			accion=2;
		break;
		case 2:
			p ("\n\n\t Deme las calificaciones de los sig. alumnos: ");
	for (i=0; i<12; i++){ 	//Para escanear las calificaciones.
		p ("\n\n\t Calificacion del alumno %d: ", i+1);
		s ("%d", &B[i]);
	}
		if (A[i]<0){
			p ("\n\n\t No es posible una calificacion negativa, intente de nuevo: ");
			p ("\n\n\t Calificacion del alumno %d: ", i+1);
			s ("%d", &B[i]);
		}
		else
		if (A[i]>10){
			p ("\n\n\t No es posible una calificacion mayor a 10, intente de nuevo: ");
			p ("\n\n\t Calificacion del alumno %d: ", i+1);
			s ("%d", &A[i]);
		}
		
	for (i=0; i<12; i++){
		A[i]=B[i];
	}
	accion=1;
	break;
}	//Llave del switch
}	//Llave del Do
while(accion<2);
				}
                system("pause>nul"); 
                break;
                
            
            case 0:
            	repetir = FALSE;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}