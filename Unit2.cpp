//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <pngimage.hpp>

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

//global declaration
int pcScore= 0;
int yourScore = 0;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Randomize();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::btRestartClick(TObject *Sender)
{
	//reset the scores
	if (pcScore > yourScore)
	{
		ShowMessage("GAME OVER!\nComputer WON, You LOST!");
	}
	else if(pcScore < yourScore)
	{
		ShowMessage("GAME OVER!\nComputer LOST, You WON!");
	}
	else
	{
		ShowMessage("GAME OVER!\nIt's a TIE!");
	}

	//set the default pictures
	imgPC->Picture->LoadFromFile("..\\..\\img\\pc.jpg");
	imgYou->Picture->LoadFromFile("..\\..\\img\\person.jpg");

	//display the score
	lblPcScore->Font->Color = clBlack;
	lblYouScore->Font->Color = clBlack;

	pcScore = 0;
	yourScore = 0;
	lblPcScore->Caption = pcScore;
	lblYouScore->Caption = yourScore;
}
//---------------------------------------------------------------------------
//----------------------function for score color change----------------------
void TForm2::color()
{
	//check the winner and apply the appropriate colour
	if (pcScore > yourScore)
	{
		lblPcScore->Font->Color = clGreen;
		lblYouScore->Font->Color = clRed;
	}
	else if (pcScore < yourScore)
	{
		lblPcScore->Font->Color = clRed;
		lblYouScore->Font->Color = clGreen;
	}
	else
	{
		lblYouScore->Font->Color = clBlack;
		lblPcScore->Font->Color = clBlack;
	}
}
//------------------------------------------------------------------------------
void __fastcall TForm2::imgRockClick(TObject *Sender)
{
	//initialize and declare
	String pick[3] = {"rock.png", "paper.png", "scissor.png"};
	int randm;
	String result = "";

	//display player's pick
	imgYou->Picture->LoadFromFile("..\\..\\img\\rock.png");

	//randomize pc's choice
	randm = random(3);

	//display PC pick
	imgPC->Picture->LoadFromFile("..\\..\\img\\" + pick[randm]);

	//determine the winner
	if (pick[randm] == "rock.png")
	{
		result = "Tie!";
		ShowMessage("It's TIE");
	}
	else if (pick[randm] == "paper.png")
	{
		result = "You lost!";
		ShowMessage("You LOST");
		pcScore++;
	}
	else if (pick[randm] == "scissor.png")
	{
		result = "You win!";
		ShowMessage("You WIN");
		yourScore++;
	}

	//call the function to check the winner and apply the appropriate colour
	color();

	//display the score
	lblPcScore->Caption = pcScore;
	lblYouScore->Caption = yourScore;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::imgPaperClick(TObject *Sender)
{
	//initialize and declare
	String pick[3] = {"rock.png", "paper.png", "scissor.png"};
	int randm;
	String result = "";

	//display your pick
	imgYou->Picture->LoadFromFile("..\\..\\img\\paper.png");

	//randomize
	randm = 0 + random(3);

	//display PC's pick
	imgPC->Picture->LoadFromFile("..\\..\\img\\" + pick[randm]);

	//determine the winner
	if (pick[randm] == "paper.png")
	{
		result = "Tie!";
		ShowMessage("It's TIE");
	}
	else if (pick[randm] == "rock.png")
	{
		result = "You win!";
		ShowMessage("You WIN");
		yourScore++;
	}
	else if (pick[randm] == "scissor.png")
	{
		result = "You lost!";
		ShowMessage("You LOST");
		pcScore++;
	}

	//call the function to check the winner and apply the appropriate colour
	color();

	//display the score
	lblPcScore->Caption = pcScore;
	lblYouScore->Caption = yourScore;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::imgScissorClick(TObject *Sender)
{
	//initialize and declare
	String pick[3] = {"rock.png", "paper.png", "scissor.png"};
	int randm;
	String result = "";

	//display player's pick
	imgYou->Picture->LoadFromFile("..\\..\\img\\scissor.png");

	//randomize
	randm = 0 + random(3);

	//display PC's pick
	imgPC->Picture->LoadFromFile("..\\..\\img\\" + pick[randm]);

	//determine the winner
	if (pick[randm] == "scissor.png")
	{
		result = "Tie!";
		ShowMessage("It's TIE");
	}
	else if (pick[randm] == "paper.png")
	{
		result = "You win!";
		ShowMessage("You WIN");
		yourScore++;
	}
	else if (pick[randm] == "rock.png")
	{
		result = "You lost!";
		ShowMessage("You LOST");
		pcScore++;
	}

	//call the function to check the winner and apply the appropriate colour
	color();

	//display the score
	lblPcScore->Caption = pcScore;
	lblYouScore->Caption = yourScore;
}
//---------------------------------------------------------------------------
