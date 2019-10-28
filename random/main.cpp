#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int hasil = 0;
    int angka = 0;
    int jawab = 0;
    char lagi = 'y';


    while(lagi == 'y'){
        int life = 3;
        srand(static_cast < unsigned int > (time(0)));

        std::cout << "Input angka antara 10-100 = "; std::cin >> angka;
        if(angka < 10){
            angka = 10;
        }else if(angka > 100){
            angka = 100;
        }
        hasil = rand()%angka+1;

        std::cout << "Silahkan tebak nilai dari 0 sampai " << angka << std::endl;
        std::cout << "(hasil = " << hasil; std::cout << ")" << std::endl;

        while(jawab != hasil && life != 0){
            std::cout << "Input tebakan anda : "; std::cin >> jawab;
            if(jawab == hasil){
                std::cout << "Tebakan Anda Benar!" << std::endl;
            }else if(jawab < hasil){
                std::cout << "\nJawaban Anda Terlalu kecil!\n" << "Sisa Nyawa = " << life-1 << std::endl;
            }else if(jawab > hasil){
                std::cout << "\nTebakan Anda Terlalu Besar!\n" << "Sisa Nyawa = " << life-1 << std::endl;
            }
            life-=1;
        }
        std::cout << "\nGame Over" << std::endl;
        std::cout << "Main Lagi? (y/n) : "; std::cin >> lagi;
    }

    return 0;
}
