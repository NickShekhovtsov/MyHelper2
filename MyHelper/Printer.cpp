#include "Printer.h"

Printer::Printer()
{

    char name[] = "Phillips";
    paper_count = 10;

    paper = new Paper[paper_count];
    for (int i = 0; i < paper_count; i++)
    {
        paper[i] = Paper();
    }
    strcpy_s(this->name, name);
    cartridge.level = 50;
}

Printer::Printer(char name[30], int paper_count)
{
    this->paper_count = paper_count;
    paper = new Paper[paper_count];
    for (int i = 0; i < paper_count; i++)
    {
        paper[i] = Paper();
    }
    strcpy_s(this->name, name);
    cartridge.level = 50;
}

Printer::~Printer()
{
	delete[]paper;
}

void Printer::Print(TaskToPrint ttp, Electricity el)
{
    if (el.get_voltage() >= require_voltage)
    {
        if (cartridge.level > strlen(ttp.get_text()) / paper[0].get_Letter_size())
        {
            if ((strlen(ttp.get_text()) / paper[0].get_Letter_size()) < paper_count)
            {
                if (strcmp(ttp.get_required_paper_size(), paper[0].get_size()) == 0)
                {

                    cout << endl;
                    for (int i = 0; i < strlen(ttp.get_text()); i++)
                    {

                        if ((i % paper[0].get_Letter_size() == 0 && i != 0))
                        {
                            paper_count--;
                            cartridge.level--;
                            cout << endl;
                        }
                        cout << ttp.get_text()[i];

                    }
                    cartridge.level--;
                    paper_count--;
                }
                else
                {
                    cout << "\nНеправильный размер бумаги";
                }
            }
            else {
                cout << "\nНедостаточно бумаги";
            }
        }
        else { cout << "\nНе хватит картриджа"; };
    }
}

void Printer::PrinterInfo()
{
    cout << endl << endl << name;
    cout << "\t" << paper_count;
    cout << "\t" << cartridge.level;
    cout << "\t" << paper[0].get_Letter_size();
    cout << endl;
}
