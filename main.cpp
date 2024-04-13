/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int opçao;
    int escolha;
    int escolha2;

    while (true) {
        
        do{
        std::cout << "\nBem vindo a ong Casco amigo \n";
        std::cout << "selecione algum número no menu a seguir para continuar \n";
        std::cout << " 1=Sócias \n 2=Quem somos nós \n 3=relação \n ";
        std::cin >> opçao;
        } while (opçao < 1 || opçao > 3);

    switch(opçao) {
        case 1:
            std::cout << "Você escolheu o número 1, Sócias\n";
            std::cout << "sobre qual das socias voce deseja saber mais \n";
            std::cout << " 1=Rainbow Dash \n 2=Fluttershy \n 3=Ambas \n ";
            std::cin >> escolha;
            if (escolha == 1) {
                std::cout << "Eai galera eu sou Rainbow Dash a pônei mais rápida e mais corajosa de toda Equestria! Voar é a minha paixão, e não há nada que eu ame mais do que sentir o vento nos meus cascos e o céu aberto acima de mim,Eu sou conhecida por ser super confiante e determinada, Quando eu defino um objetivo, não há nada que me impeça de alcançá-lo! Meus amigos sabem que podem sempre contar comigo, porque eu sou leal até o fim,Mas, sabe, no final das contas, o que realmente importa é estar junto dos meus amigos e aproveitar cada momento juntos, Afinal, a vida é uma grande aventura, e estou pronta para voar alto e colorir o céu com minha alegria e determinação!\n";
                } else if (escolha == 2) {
                std::cout << "olá Sou a Fluttershy. Adoro passar o tempo com meus queridos amiguinhos animais. Eles são minha maior alegria e inspiração,Cuido deles com todo o amor e carinho do mundo, garantindo que estejam sempre felizes e saudáveis, Às vezes, sou um pouco tímida, mas isso não me impede de mostrar coragem quando meus amigos ou os animais estão em perigo,A natureza é meu refúgio, onde encontro paz e tranquilidade, A amizade é tudo para mim, e farei qualquer coisa para proteger e cuidar daqueles que amo.\n";
                } else if (escolha == 3) {
                std::cout << "Eai galera eu sou Rainbow Dash a pônei mais rápida e mais corajosa de toda Equestria! Voar é a minha paixão, e não há nada que eu ame mais do que sentir o vento nos meus cascos e o céu aberto acima de mim,Eu sou conhecida por ser super confiante e determinada, Quando eu defino um objetivo, não há nada que me impeça de alcançá-lo! Meus amigos sabem que podem sempre contar comigo, porque eu sou leal até o fimMas, sabe, no final das contas, o que realmente importa é estar junto dos meus amigos e aproveitar cada momento juntos, Afinal, a vida é uma grande aventura, e estou pronta para voar alto e colorir o céu com minha alegria e determinação!\n";
                std::cout << "olá Sou a Fluttershy. Adoro passar o tempo com meus queridos amiguinhos animais. Eles são minha maior alegria e inspiração,Cuido deles com todo o amor e carinho do mundo, garantindo que estejam sempre felizes e saudáveis, Às vezes, sou um pouco tímida, mas isso não me impede de mostrar coragem quando meus amigos ou os animais estão em perigo,A natureza é meu refúgio, onde encontro paz e tranquilidade, A amizade é tudo para mim, e farei qualquer coisa para proteger e cuidar daqueles que amo.\n";
            }else {
                std::cout << "Escolha invalida.\n";
            }
            break;
            break;
        case 2:
            std::cout << "Você escolheu o número 2, Quem somos nós\n";            
            std::cout << "Somos uma Organização Não Governamental, uma entidade de caráter privado, sem fins lucrativos e independente do governo,Nós nos dedicamos a resgatar animais perdidos,cuidar de animais feridos e o mais importante dar muito carinho e amor para esses animais ate encontrarmos um lar para eles,nós acreditamos que todo animal merece ter um lar, então nós decidimos nos unir para fazer com que isso seja possivel. \n";            
            break;
        case 3:
            std::cout << "Você escolheu o número 3,relação. \n";
            std::cout << "sobre qual relação voce deseja saber mais: \n";
            std::cout << " 1=Rainbow Dash \n 2=Fluttershy \n";
            std::cin >>escolha2;
            if (escolha2 == 1){
            std::cout << "Meu nome é Rainbow Dash \n sou umas das socias da ong Casco amigo eu sou uma ponei pegasus que adora velocidade,sempre amei muito os animais prinscipalmente de voar com eles, um dia em um concurso de escolher animais e uma tartaruga me escolheu(é um cagado ps: Fluttershy),e foi nesse concurso que eu percebi como alguns animais sao tristes por não terem um lar, foi ai que eu decidi me juntar a minha amiga Fluttershy e criar a ong CASCO AMIGO,desde então eu faço tudo oque for possivel pela terra e pelos céus para que todos os animais tenham um lar e um ponei para chamar de seu. \n";
            } else if (escolha2 == 2){
            std::cout << "Meu nome é Fluttershy \n sou umas das socias da ong Casco amigo eu sou uma ponei pegasus que adora os animais,eu tenho a incrivel habilidade de me comunuicar com os animais,e eu uso essa habilidade para cudar deles e dar tudo oque eles precisam,quando os animais que moram comigo me disseram que muitos outros animais nao tinham um lar  eu fiquei muito triste,então decidi me juntar com minha amiga Rainbow Dash e criar a ong CASCO AMIGO, desde então nós fazemos de tudo por todos os animais. \n";
            } else {
                std::cout << "Escolha invalida. \n";
            }
            break;
        default:
            std::cout << "Escolha inválida!\n";             
            std::cout << "Escolha outro número!\n";

    }
}
    return 0;
}

