#include <stdio.h>
#define SALDO 10000000

header(){
	printf("***********************************\n");
	printf("          Selamat Datang di        \n");
	printf("          ATM BNI Sentausa         \n");
	printf("           Pecahan 50.000          \n");
	printf("***********************************\n");
	printf("----- Masukkan kartu ATM anda -----\n");
	printf("-----------------------------------\n");
	printf("------- Insert Your ATM card ------\n");
	getch();
}

welcome(){
	int pilihan;
	system("cls");
	printf("***********************************\n");
	printf("          Selamat Datang di        \n");
	printf("          ATM BNI Sentausa         \n");
	printf("***********************************\n");
	printf("\n\n Pilih Bahasa");
	printf("\n\n Choose Language");
	
	printf("\n\n1. Indonesia");
	printf("\n\n2. English");
	printf("\n\n>> ");
	scanf("%d", &pilihan);
	
	if(pilihan==1){
		printf("Indonesia");
	}else if(pilihan==2){
		printf("English");
	}else{
		welcome();
	}	
}
	
void menu(){
	int pilihan;
	int nominal;
	int saldo = 10000000;
	int transfer;
	system("cls");
	printf("\n---------- Selamat Datang di Bank BNI Sentausa ----------");
	printf("\n-------------        Menu Utama          ----------------");	
	printf("\n=========================================================\n");

	printf("[1] 100000                       [2] 300000              \n");
	printf("[3] 500000                       [4] 1000000             \n");
	printf("[5] Penarikan Jumlah lain        [6] Informasi Saldo     \n");
	printf("[7] Menu lain                    [0] Batal               \n");
	printf("========================================================");
	printf("\nMasukkan pilihan: ");
	scanf("%d", &pilihan);
	
	if(pilihan == 1){
		if(saldo>=100000){
        	printf("\nNominal yang akan anda tarik adalah : Rp. 100000");
        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-100000);
        	}
        else if(saldo<100000){
        	printf("Saldo anda kurang!");
			}      	
		}
	else if(pilihan == 2){
		if(saldo>=300000){
        	printf("Nominal yang akan anda tarik adalah : Rp. 300000");
        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-300000);
        	}
        else if(saldo<300000){
        	printf("\nSaldo anda kurang!");
			}      	
		}
	else if(pilihan == 3){
		if(saldo>=500000){
        	printf("Nominal yang akan anda tarik adalah : Rp. 500000");
        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-500000);
        	}
        else if(saldo<500000){
        	printf("\nSaldo anda kurang!");
			}      	
		}
	else if(pilihan == 4){
		if(saldo>=1000000){
        	printf("\nNominal yang akan anda tarik adalah : Rp. 1000000");
        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-1000000);
        	}
        else if(saldo<1000000){
        	printf("\nSaldo anda kurang!");
			}      	
		}
	else if(pilihan == 5){
		printf("\nMasukkan jumlah nominal yang ingin ditarik: ");
		scanf("%d", nominal);
		if(saldo>=nominal){
			printf("\nApakah anda yakin akan menarik nominal sebesar Rp.%d?", nominal);	
			printf("1. Ya     2. Tidak");
			printf("Masukkan pilihan: ");
			scanf("%d", &pilihan);
			
			if(pilihan == 1){
				printf("Selamat Transaksi anda berhasil !!");
				printf("Saldo anda sekarang adalah: Rp.%d", saldo = saldo-nominal);
				} else{
				printf("Transaksi dibatalkan");
			}
		}else if(saldo<nominal){
			printf("SALDO ANDA TIDAK MENCUKUPI!");
		}else{
			printf("Masukkan pilihan yang tersedia!!");
		}
	}
	else if(pilihan == 6){
		printf("Saldo anda adalah Rp. %d\n\n", saldo);
	}
	else if(pilihan == 7){
		printf("Pilih Menu lainnya!!");
		printf("\n1. Transfer");
		printf("\n2. Pembayaran");
		
		printf("\nPilihan: ");
		scanf("%d", &pilihan);
		
		if(pilihan==1){
			
			printf("\nSilahkan masukkan nomer rekening tujuan anda = ");
	        scanf("%d", &transfer);
	        printf("\nMasukkan nominal yang akan anda transfer = ");
	        scanf("%d", &nominal);
	        printf("\n\n\n\n                                       Daftar Kode bank");
//	        system("cls");
	        
			while(1){
				system("cls");
				if(saldo>=nominal){
	        	
		      	printf("\nApakah anda akan mentransfer %d ke %d ?", nominal, transfer);
		        printf("\n\n1. Ya  2. Tidak\n\n");
		        printf("\nMasukkan pilihan anda = ");
       			scanf("%d", &pilihan);      
      					if (pilihan==1){
            			    printf("\nTransaksi Berhasil");
              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal);
              				exit(0);              			}
           				else{
              				  printf("\nTransaksi Dibatalkan");
        					}
						}
	        	else if(saldo<nominal){
	        	printf("Saldo anda kurang!");
		}
	}
}
}

			}
	        
int pin_atm(int salah){
	int pin;
    printf("\n\nMasukkan Pin Anda >>");
    scanf("%d", &pin);
    system("cls");

    if(pin==1234){
        menu();
    }else {
        printf("Silahkan masukkan pin yang benar !\n");
        if (salah==3){
        printf ("\nATM Diblokir Karena Anda 3x Salah Memasukkan PIN\n\n");
        return 0;
        }
		salah += 1;
        return pin_atm(salah);
    }
    return salah;
}

void main(){
	header();
	welcome();
	pin_atm(0);
	menu();

}
