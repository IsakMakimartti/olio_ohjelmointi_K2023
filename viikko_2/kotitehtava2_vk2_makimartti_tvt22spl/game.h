#ifndef GAME_H
#define GAME_H


class game
{
public:

    game(int); // Constructor
    ~game(); // Deconstructor
    void play(); // Funktio, laitetaan peli pyöriin
    int setNumber(); // Funktio, asetetaan maksimi nro

private:
    // Muuttujat, Variables
    int maxNumber; // Käyttäjän antama maksimi nro
    int playerGuess; // Käyttäjän arvaus
    int randomNumber; // Oikea random numero
    int numOfGuesses; // Arvausten määrä

    void printGameResult(); // Funktio, printataan tulos
};

#endif // GAME_H
