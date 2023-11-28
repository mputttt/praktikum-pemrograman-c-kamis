#include <stdio.h>

int main() 
{
    // Menggunakan for untuk mencetak perulangan deret angka
    
	for (int i = 0; i <= 10; i++) 
	{
        // untuk mendapatkan nilai yg diinginkan maka Menggunakan rumus 2 pangkat i
        
        int nilai = 1 << i;
        printf("%i ", nilai);
    }

    // Baris baru setelah mencetak deret angka
    
    printf("\n");

    return 0;
}
