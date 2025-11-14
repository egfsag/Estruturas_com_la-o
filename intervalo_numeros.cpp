#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 10 ; i++)
  {
    cout << i << endl;
  }
  
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    
	int n;
	
	float nota, soma = 0, media;
	cout << "Quantas notas deseja informar? ";
	cin >> n;
	
	if (n <= 0) {
		cout << "Numero de notas." << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cout << "Digite a nota " << i << ": ";
		cin >> nota;
		soma += nota;
	}
	media = soma / n;
	
	cout << "A media das " << n << " notas C): " << media << endl;
	
	return 0;
}




#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i >= 1; i--) {
        cout << i << endl;
    }
    return 0;
}

 

#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 1000; i += 2) {
        cout << i << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int numero;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "º numero: ";
        cin >> numero;

        if (numero % 2 == 0)
            cout << numero << " é PAR\n";
        else
            cout << numero << " é ÍMPAR\n";

        cout << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero >= 10 && numero <= 20)
        cout << numero << " está no intervalo [10,20]." << endl;
    else
        cout << numero << " está fora do intervalo [10,20]." << endl;

    return 0;
}



