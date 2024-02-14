#include <iostream>

using namespace std;

// Aqui van las clases
class Pokemon{
    // Estos son los atributos;
    public:
        string name;
        float peso;

    //Estos son los metodos y el constructor;
    public:
        Pokemon(string, float);
        void Saludo();
};

//Este es el constrcutor
Pokemon::Pokemon(string _name, float _peso){
    name = _name;
    peso = _peso;
}

void Pokemon::Saludo(){
    cout << "El pokemon que te saluda es : " << name <<" y el pesa: "<<peso <<"kg"<<endl;
}

//Clase hija;
class Pokemons_Fuego : public Pokemon{
    public: 
        int vida;
        char genero;

    public: 
        Pokemons_Fuego(string, float, int, char);
        void mostrarPokemon();
};

Pokemons_Fuego ::Pokemons_Fuego(string _name, float _peso, int _vida, char _genero): Pokemon(_name, _peso){
    vida = _vida;
    genero = _genero;
}

void Pokemons_Fuego ::mostrarPokemon(){
    Saludo();
    cout << "El pokemon tiene : " << vida<< " puntos de vida y su genero es: " << genero ;
}
int main(){

    // Pokemon pokemon1 = Pokemon("Pikachu", 65);
    // pokemon1.Saludo();

    // Pokemon pokemon2("Yesid", 75);
    // pokemon2.Saludo();

    Pokemons_Fuego pokemon1("Pikachu", 76, 100, 'M');
    pokemon1.mostrarPokemon();

    return 0;
};