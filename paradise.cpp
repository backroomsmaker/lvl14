#include <iostream>
#include <ctime>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void pausa() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1000000);
#endif
}


void startParadise() {
    	int paradise;
	std::cout << "" <<std::endl;
    	std::cout << "<<Benvenuto errante!>>\n";
    	std::cout << "" <<std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "<<Finalmente sei sveglio.>>" << std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "<<Vieni, qui sarai al sicuro>>" << std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "Attraversando una fitta nebbia, ti ritrovi all'orlo di una foresta densa e soffocante." << std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "Alberi alti e contorti si ergono come sentinelle silenziose, mentre il suolo sotto di te è un tappeto di foglie marcescenti." << std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "L'aria è umida e carica di un odore di terra e muffa." <<std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "Con un senso di trepidazione, fai il tuo primo passo nella foresta rossa." <<std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "1. Segui il sentiero di fronte a te." <<std::endl;
    	pausa();
	std::cout << "" <<std::endl;
    	std::cout << "2. Segui la voce che hai sentito entrando." <<std::endl;
    	std::cin >> paradise;
	switch (paradise){
		int percorso;
		case 1:
			std::cout << "" <<std::endl;
			std::cout << "Mentre procedi, la foresta si addensa sempre di più." <<std::endl;
			pausa();
			std::cout << "" <<std::endl;
			std::cout << "I rami intrecciati formano un tetto naturale che filtra la luce rosso cremisi che proviene dal cielo." <<std::endl;
                        pausa();
			std::cout << "" <<std::endl;
			std::cout << "Ogni tanto, il silenzio è rotto dal lontano rumore di una cascata." <<std::endl;
                        pausa();
			std::cout << "" <<std::endl;
			std::cout << "Muschio e funghi ricoprono ogni superficie" <<std::endl;
			std::cout << "occasionalmente, il terreno cede sotto i tuoi piedi, rivelando radici e piccoli abissi." <<std::endl;
			std::cout << "" <<std::endl;
			pausa();
			std::cout << "1. Prosegui ancora più in fondo." <<std::endl;
			pausa();
			std::cout << "2. Dirigiti verso il suono della cascata." <<std::endl;
			std::cin >> percorso;
			switch (percorso){
				int vita;
				case 1:
					std::cout << "" <<std::endl;
					pausa();
					std::cout << "Un sussurro tra le foglie attira la tua attenzione." <<std::endl;
					pausa();
					std::cout << "Osservi, con il cuore che batte all'impazzata, mentre una figura scivola tra gli alberi." <<std::endl;
					pausa();
                                        std::cout << " difficile distinguere i dettagli, ma senti chiaramente che non sei solo." <<std::endl;
					pausa();
                                        std::cout << "La presenza sembra osservarti tanto quanto tu osservi lei" <<std::endl;
					pausa();
                                        std::cout << "prima di svanire silenziosamente tra gli alberi." <<std::endl;
					pausa();
                                        std::cout << "" <<std::endl;
					std::cout << "1. Segui quella figura." <<std::endl;
					std::cout << "" <<std::endl;
					std::cout << "2. Prosegui per il sentiero." <<std::endl;
					std::cin >> vita;
					switch (vita){
						int fight;
						case 1:
							std::cout << "" <<std::endl;
							pausa();
							std::cout << "Ti senti osservato e, girandoti rapidamente, intravedi solo la coda di un essere veloce e scattante che si ritrae tra gli alberi." <<std::endl;
							std::cout << "" <<std::endl;
							std::cout << "Improvvisamente vieni aggredito da quella figura." <<std::endl;
							pausa();
							std::cout << "" <<std::endl;
							std::cout << "1. Prova ad attaccare." <<std::endl;
							std::cout << "" <<std::endl;
							std::cout << "2. Scappa." <<std::endl;
							std::cin >> fight;
							switch (fight){
								int foschia;
								case 1:
									std::cout << "" <<std::endl;
									std::cout << "Ogni colpo contro la creatura risuona attraverso la foresta" <<std::endl;
									pausa();
									std::cout << "" <<std::endl;
                                                                        std::cout << "le foglie tremano mentre parate e contrattacchi si susseguono in un danza mortale." <<std::endl;
                                                                        pausa();
									std::cout << "" <<std::endl;
                                                                        std::cout << "Mentre combatti, il terreno cede sotto di te, portandoti in una fossa coperta di foglie." <<std::endl;
                                                                        pausa();
									std::cout << "" <<std::endl;
                                                                        std::cout << "Mentre cerchi di uscirne, la creatura si avvicina per il colpo finale." <<std::endl;
                                                                        pausa();
									std::cout << "" <<std::endl;
                                                                        std::cout << "1. Cerca di fuggire." <<std::endl;
                                                                        std::cout << "" <<std::endl;
                                                                        std::cout << "2. Continua a combattere." <<std::endl;
                                                                        std::cin >> foschia;
									switch (foschia){
										int hope;
										case 1:
											std::cout << "" <<std::endl;
                                                                        		std::cout << "Superato in forza, l'unica opzione è la fuga." <<std::endl;
                                                                        		std::cout << "" <<std::endl;
                                                                        		std::cout << "Corri tra gli alberi, schivando radici e rami, mentre il nemico ti insegue, sempre troppo vicino per conforto." <<std::endl;
                                                                        		pausa();
											std::cout << "" <<std::endl;
                                                                                        std::cout << "Con le spalle al muro, dai tutto te stesso in un'ultima, disperata offensiva." <<std::endl;
                                                                                        std::cout << "" <<std::endl;
                                                                                        std::cout << "Ogni colpo conta, ogni respiro potrebbe essere l'ultimo in questo duello finale." <<std::endl;
                                                                                        pausa();
											std::cout << "" <<std::endl;
                                                                        		std::cout << "1. Continua a combattere." <<std::endl;
                                                                        		std::cout << "" <<std::endl;
                                                                        		std::cout << "2. Cerca di ritirarti." <<std::endl;
                                                                       			std::cin >> hope;
											switch (hope){
												case 1:
													std::cout << "" <<std::endl;
													std::cout << "Sopraffatto, cadi a terra, la vista che si annebbia mentre l'avversario si avvicina." <<std::endl;
                                                                                        		std::cout << "" <<std::endl;
													std::cout << "L'ultimo pensiero è una preghiera silenziosa mentre la foresta inghiotte tutto." <<std::endl;
                                                                                        		std::cout << "" <<std::endl;
													exit(0);
												int poi;
												case 2:
													std::cout << "" <<std::endl;
													std::cout << "Sopraffatto e ferito, esci dal combattimento con una ritirata rapida" <<std::endl;
													std::cout << "" <<std::endl;
													pausa();
                                                                                        		std::cout << "il cuore che batte all'impazzata mentre l'eco dei tuoi nemici si perde tra gli alberi." <<std::endl;
                                                                                        		std::cout << "" <<std::endl;
                                                                                        		std::cout << "" <<std::endl;
													pausa();
													std::cout << "1. Corri verso le cascate." <<std::endl;
                                                                                                        std::cout << "2. Corri verso l'interno della foresta." <<std::endl;
                                                                                                        std::cin >> poi;
													switch (poi){
														case 1:
															goto WATER;
														int uscita;
														case 2:
															std::cout << "" <<std::endl;
															std::cout << "Proseguendo noti una figura incappucciata che ti sorride da lontano." <<std::endl;
															std::cout << "" <<std::endl;
															std::cout << "Continui a correre evitando di avvicinarti alla figura." <<std::endl;
															pausa();
															std::cout << "Noti nel terreno più avanti un buco." <<std::endl;
                                                                                                        		pausa();
															std::cout << "La figura incappucciata inizia ad urlare e senti che molte altre creature stanno per arrivare." <<std::endl;
                                                                                                        		pausa();
															std::cout << "Salti nel buco sperando sia la scelta giusta da compiere." <<std::endl;
															pausa();
															std::cout << "Ti risvegli in un edificio abbandonato e decandente." <<std::endl;
															std::cout << "Sei riuscito ad uscire dal livello 14." <<std::endl;
                                                                                                        		exit(0);
													}
											}
										int parkour;
										case 2:
											std::cout << "" <<std::endl;
                                                                        		std::cout << "Salti da un ramo all'altro, inseguito da esseri agili che sembrano volare tra le fronde." <<std::endl;
                                                                        		std::cout << "" <<std::endl;
                                                                        		std::cout << "Ogni salto è un rischio, ogni atterraggio un sollievo temporaneo." <<std::endl;
                                                                        		pausa();
											std::cout << "" <<std::endl;
                                                                        		std::cout << "1. Prosegui verso la cascata." <<std::endl;
                                                                        		std::cout << "" <<std::endl;
                                                                        		std::cout << "2. Cerca rifugio verso l'interno della foresta." <<std::endl;
                                                                        		std::cin >> parkour;
											switch (parkour){
                                                                                                case 1:
                                                                                                        std::cout << "" <<std::endl;
													pausa();
													std::cout << "Combattendo vicino a una cascata, l'acqua diventa un nemico aggiuntivo." <<std::endl;
													std::cout << "" <<std::endl;
													pausa();
													std::cout << "Scivoloni e correnti impetuose complicano ogni movimento mentre cerchi di tenere a bada l'avversario." <<std::endl;
													std::cout << "" <<std::endl;
													pausa();
													std::cout << "Utilizzando l'ambiente a tuo vantaggio, eludi l'avversario, infliggendo danni da lontano fino a quando non sceglie di ritirarsi" <<std::endl;
                                                                                                        pausa();
													std::cout << " lasciandoti vincitore ma vigile per future minacce." <<std::endl;
                                                                                                        pausa();
													goto WATER;
                                                                                                case 2:
                                                                                                        std::cout << "" <<std::endl;
													std::cout << "Cerchi rifugio verso l'interno della foresta." <<std::endl;
                                                                                                        pausa();
													std::cout << "Provi a riposarti per un po' vicino ad un albero." <<std::endl;
													pausa();
													std::cout << "Improvvisamente guardando alla tua destra noti una figura incappucciata che ti afferra dal collo." <<std::endl;
													pausa();
                                                                                                        std::cout << "La stanchezza non ti permette di reagire." <<std::endl;
                                                                                                        pausa();
													pausa();
                                                                                                        std::cout << "<<Ora finalmente potrai riposare anche tu, benvenuto nel paradiso>>" <<std::endl;
													pausa();
                                                                                                        std::cout << "Perdi i sensi." <<std::endl;
                                                                                                        exit(0);
                                                                                        }
									}
								int fuga;
								case 2:
									std::cout << "" <<std::endl;
									std::cout << "Il suono dei tuoi passi pesanti rimbomba tra gli alberi mentre corri" <<std::endl;
									std::cout << "" <<std::endl;
                                                                        std::cout << "uno sguardo furtivo sopra la spalla rivela solo le ombre che ti inseguono, mute e instancabili." <<std::endl;
                                                                        pausa();
									std::cout << "" <<std::endl;
                                                                        std::cout << "Con il fiato corto e il cuore in gola, zigzaghi tra alberi antichi." <<std::endl;
                                                                        pausa();
									std::cout << "" <<std::endl;
                                                                        std::cout << "Ogni tanto, un ramo ti sfiora il volto, un promemoria della presenza incessante dell'inseguitore invisibile." <<std::endl;
                                                                        std::cout << "" <<std::endl;
                                                                        std::cout << "" <<std::endl;
									pausa();
                                                                        std::cout << "1. Continua a scappare." <<std::endl;
                                                                        pausa();
									std::cout << "2. Dirigiti verso la cascata." <<std::endl;
                                                                        std::cin >> fuga;
									switch (fuga){
										case 1:
											std::cout << "" <<std::endl;
                                                        				std::cout << "foglie e rami si infrangono contro di te mentre corri disperatamente" <<std::endl;
                                                        				pausa();
											std::cout << "" <<std::endl;
                                                                                        std::cout << " il rumore dell'inseguimento sempre alle tue calcagna, una sinfonia di terrore nella quiete della foresta." <<std::endl;
                                                                                        pausa();
											std::cout << "" <<std::endl;
                                                                                        std::cout << "Lo scontro è inevitabile." <<std::endl;
                                                                                        pausa();
											std::cout << "" <<std::endl;
                                                                       			std::cout << "Una densa nebbia avvolge lo scontro, rendendo difficile distinguere amico da nemico." <<std::endl;
                                                                        		pausa();
											std::cout << "" <<std::endl;
                                                                        		std::cout << "Ogni ombra potrebbe essere un pericolo, ogni suono una minaccia." <<std::endl;
                                                                        		pausa();
											std::cout << "" <<std::endl;
                                                        				std::cout << "Con le spalle al muro, dai tutto te stesso in un'ultima, disperata offensiva." <<std::endl;
                                                        				pausa();
                                                        				std::cout << "" <<std::endl;
                                                        				std::cout << "Ogni colpo conta, ogni respiro potrebbe essere l'ultimo in questo duello finale." <<std::endl;
											pausa();
                                                                                        std::cout << "" <<std::endl;
                                                                                        std::cout << "Combattendo fino all'ultimo respiro, cadi con onore." <<std::endl;
											pausa();
                                                                                        std::cout << "" <<std::endl;
                                                                                        std::cout << " La foresta sembra rallentare intorno a te mentre accetti il tuo destino" <<std::endl;
											pausa();
                                                                                        std::cout << "sperando che il tuo sacrificio non sia stato vano." <<std::endl;
                                                                                        std::cout << "" <<std::endl;
											pausa();
                                                                                        std::cout << "" <<std::endl;
                                                                                        std::cout << "La tua avventura termina qui." <<std::endl;
                                                        				exit(0);
										case 2:
											std::cout << "" <<std::endl;
                                                        				std::cout << "Riesci a guadagnare abbastanza terreno e ti dirigi verso la cascata." <<std::endl;
                                                        				goto WATER;
									}
							}
						case 2:
							std::cout << "Prosegui per il sentiero." <<std::endl;
							std::cout << "" <<std::endl;
                                                        std::cout << "Il crepuscolo avvolge la foresta in un velo di mistero." <<std::endl;
                                                        pausa();
							std::cout << "" <<std::endl;
                                                        std::cout << "Le luci e le ombre giocano tra gli alberi antichi, creando un mosaico di penombre e bagliori fugaci." <<std::endl;
                                                        pausa();
							std::cout << "" <<std::endl;
                                                        std::cout << "Il sottobosco è un groviglio di vita." <<std::endl;
                                                        pausa();
                                                        std::cout << "" <<std::endl;
                                                        std::cout << "Radici intrecciate, funghi colorati e fiori poco comuni formano un tappeto vivente che si stende ai tuoi piedi, sussurrando storie dimenticate con ogni tuo passo." <<std::endl;
                                                        pausa();
							std::cout << "" <<std::endl;
                                                        std::cout << "Senti un improvvisa stanchezza e crolli a terra." <<std::endl;
                                                        pausa();
                                                        std::cout << "" <<std::endl;
                                                        std::cout << "Una figura incappucciata ti guarda dall'alto e sussurra." <<std::endl;
                                                        pausa();
							std::cout << "Riposa pure, ora sei al sicuro nel paradiso." <<std::endl;
							std::cout << "" <<std::endl;
							std::cout << "Non riesci a muoverti, ma vedi delle creature che inziano a divorarti." <<std::endl;
							exit(0);
					}
			}
		int cascata;
		WATER:case 2:
			std::cout << "" <<std::endl;
			std::cout << "Seguendo un ruscello mormorante, arrivi a una cascata che si precipita verso l'abisso." <<std::endl;
			pausa();
			std::cout << "" <<std::endl;
			std::cout << " L'acqua fredda e schiumosa danza sotto la luce filtrante." <<std::endl;
			pausa();
			std::cout << "" <<std::endl;
                        std::cout << "Noti che sono una serie di cascate, precisamente 7." <<std::endl;
                        pausa();
			std::cout << "" <<std::endl;
                        std::cout << "Senti una voce diversa chiamarti" <<std::endl;
                        pausa();
			std::cout << "" <<std::endl;
			std::cout << "<<Lascia questo posto.>>" <<std::endl;
			pausa();
			std::cout << "" <<std::endl;
                        std::cout << "Scegli la cascata giusta e sarai libero." <<std::endl;
                        pausa();
			std::cout << "" <<std::endl;
                        std::cout << "Scegli una cascata tra le 7 digitando il numero della cascata che desideri attraversare." <<std::endl;
                        std::cin >> cascata;
			switch (cascata){
				case 1:
					std::cout << "" <<std::endl;
					std::cout << "Hai scelto la prima cascata" <<std::endl;
                        		std::cout << "" <<std::endl;
                        		pausa();
					std::cout << "Purtroppo non è quella giusta e vieni risucchiato dalla corrente." <<std::endl;
                                        exit(0);
				case 2:
					std::cout << "" <<std::endl;
                                        std::cout << "Hai scelto la seconda cascata" <<std::endl;
                                        std::cout << "" <<std::endl;
                                        pausa();
					std::cout << "Purtroppo non è quella giusta e vieni risucchiato dalla corrente." <<std::endl;
                                        exit(0);
				case 3:
					std::cout << "" <<std::endl;
                                        std::cout << "Hai scelto la terza cascata" <<std::endl;
                                        std::cout << "" <<std::endl;
                                        pausa();
					std::cout << "Riesci a percepire un cambiamento interno" <<std::endl;
					std::cout << "" <<std::endl;
					pausa();
					pausa();
					std::cout << "Come un miglioramento della tua psiche" <<std::endl;
					std::cout << "" <<std::endl;
					pausa();
					pausa();
					std::cout << "Apri gli occhi e noti che sei in un nuovo livello." <<std::endl;
					std::cout << "Sei riuscito ad uscire dal livello 14." <<std::endl;
					exit(0);
				case 4:
					std::cout << "" <<std::endl;
                                        std::cout << "Hai scelto la quarta cascata" <<std::endl;
                                        std::cout << "" <<std::endl;
                                        pausa();
					std::cout << "Purtroppo non è quella giusta e vieni risucchiato dalla corrente." <<std::endl;
                                        exit(0);
				case 5:
					std::cout << "" <<std::endl;
                                        std::cout << "Hai scelto la quinta cascata" <<std::endl;
                                        std::cout << "" <<std::endl;
                                        pausa();
					std::cout << "Purtroppo non è quella giusta e vieni risucchiato dalla corrente." <<std::endl;
                                        exit(0);
				case 6:
					std::cout << "" <<std::endl;
                                        std::cout << "Hai scelto la sesta cascata" <<std::endl;
                                        std::cout << "" <<std::endl;
                                        pausa();
					std::cout << "Purtroppo non è quella giusta e vieni risucchiato dalla corrente." <<std::endl;
                                        exit(0);
				case 7:
					std::cout << "" <<std::endl;
                                        std::cout << "Hai scelto la settima cascata" <<std::endl;
                                        std::cout << "" <<std::endl;
                                        pausa();
					std::cout << "Purtroppo non è quella giusta e vieni risucchiato dalla corrente." <<std::endl;
                                        exit(0);
			}
	}
}

