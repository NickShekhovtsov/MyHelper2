#include "TaskToPrint.h"

void TaskToPrint::set_text(char* text)
{
	for (int i = 0; i < 3000; i++)
	{
		this->text[i] = text[i];
	}
}

char* TaskToPrint::get_text()
{
	return text;
}

void TaskToPrint::set_required_paper_size(char* required_paper_size)
{
	for (int i = 0; i < 3; i++)
	{
		this->required_paper_size[i] = required_paper_size[i];
	}
}

char* TaskToPrint::get_required_paper_size()
{
	return required_paper_size;
}
