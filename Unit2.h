//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TImage *imgPC;
	TImage *imgYou;
	TLabel *Label2;
	TLabel *Label3;
	TButton *btRestart;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *lblPcScore;
	TLabel *lblYouScore;
	TImage *imgRock;
	TImage *imgPaper;
	TImage *imgScissor;
	void __fastcall btRestartClick(TObject *Sender);
	void __fastcall imgRockClick(TObject *Sender);
	void __fastcall imgPaperClick(TObject *Sender);
	void __fastcall imgScissorClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
	void color();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
