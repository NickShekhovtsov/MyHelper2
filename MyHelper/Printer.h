#pragma once
#include "Paper.h"
#include "Electricity.h"
#include "TaskToPrint.h"
class Printer
{
    struct �artridge
    {
        int level;
    };

    char name[30];
    int paper_count = 0;
    int require_voltage = 210;
    �artridge cartridge;
    Paper* paper;

public:
    Printer();
    Printer(char name[30], int paper_count);
    ~Printer();
    void Print(TaskToPrint ttp, Electricity el);
    void PrinterInfo();

   
};

