
#include "SortingArr.h"
#include <conio.h>


using namespace std;
/*
const int dlina_massiva = 15;

const int n = 255;                                // ����� ��������� � �������
int col_razr = 4;                                 // ���������� �������� ���� ������� ���� �� ������ ����� 4 � unsigned
int velich_razr(int chislo, int razr)            // ���������� ����� � ������� ������� � ����������� ������� 
{
	while (razr>1)
	{
		chislo /= 256;
		razr--;
	}
	return chislo % 256;
}

void sort_razr(int dop_mas[n][n], unsigned mas[n], int razr)
{
	int mas_col[n];                    //������ ��� �������� ���������� �������� 
	int i, j, temp = 0;
	for (i = 0; i<n; i++)
		mas_col[i] = 0;                 // ��������� ���� ������ ���������� ������

	for (i = 0; i<dlina_massiva; i++)
	{
		int a = velich_razr(mas[i], razr);  //��� ������� �������� ��������� ������� ��������� �������� � ������������ �������
		dop_mas[mas_col[a]][a] = mas[i];    //�������� � �������������� ������
		mas_col[a]++;
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<mas_col[i]; j++, temp++)
		{
			mas[temp] = dop_mas[j][i];
		}
	}
}
*/


	

int main(){
	/*
	int razr, i;
	unsigned mas[dlina_massiva] = { 309583861, 300705628, 258031930, 216658974, 196782888, 91362605, 73770575, 72046849, 39759516, 17004930, 2162267, 12, 8, 475, 145 };
	int dop_mas[n][n];
	for (razr = 4; razr>1; razr--)
		sort_razr(dop_mas, mas, razr);
	for (i = 0; i<dlina_massiva; i++)
		cout << mas[i] << endl;
	*/

	//Sort::cases = Sort::SORTED; // ����
	
	
	// -------------------------------------------------- ���������� ������� ------------------------------------------	
	//=========SORTED===================
	//***********PUNY****************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::PUNY, Sort::SORTED);
	//arrOne->Testing(&arrOne->Quick); //����
	arrOne->Print("one.txt");
	arrOne->Selection();
	arrOne->Print("oneSort_P_S.txt");               // ���� ��������� ���������� ����� ������� ���������� ����������������
	delete arrOne;
	*/

	//***********LITTLE***************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::LITTLE, Sort::SORTED);
	arrOne->Print("one.txt");
	arrOne->Selection();
	arrOne->Print("oneSort_L_S.txt");               // ���� ��������� ���������� ���������� ������� ���������� ����������������
	delete arrOne;
	*/

	//***********SMALL***************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::SMALL, Sort::SORTED);
	arrOne->Print("one.txt");
	arrOne->Selection();
	arrOne->Print("oneSort_S_S.txt");               // ���� ��������� ���������� ���������� ������� ���������� ����������������
	delete arrOne;
	*/

	//***********MIDDLE***************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::MIDDLE, Sort::SORTED);
	arrOne->Print("one.txt");
	arrOne->Selection();
	arrOne->Print("oneSort_M_S.txt");               // ���� ��������� ���������� �������� ������� ���������� ����������������
	delete arrOne;
	*/

	//***********BIG***************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::BIG, Sort::SORTED);
	arrOne->Print("one.txt");
	arrOne->Selection();
	arrOne->Print("oneSort_B_S.txt");               // ���� ��������� ���������� �������� ������� ���������� ����������������
	delete arrOne;
	*/

	//***********GREAT***************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::GREAT, Sort::SORTED);
	arrOne->Print("one.txt");
	arrOne->Selection();
	arrOne->Print("oneSort_G_S.txt");               // ���� ��������� ���������� ����� �������� ������� ���������� ����������������
	delete arrOne;
	*/

	//***********HUGE***************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::HUGE, Sort::SORTED);
	arrOne->Print("one.txt");
	arrOne->Selection();
	arrOne->Print("oneSort_H_S.txt");               // ���� ��������� ���������� ��������� ������� ���������� ����������������
	delete arrOne;
	*/
	



	//=========REVERS===================
	//***********PUNY****************
	/*
	Sort *arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::PUNY, Sort::REVERS);
	arrTwo->Print("two.txt");
	arrTwo->Selection();
	arrTwo->Print("twoSort_P_Rv.txt");               // ���� ��������� ���������� ����� ������� ���������� ������������
	delete arrTwo;
	*/

	//***********LITTLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::LITTLE, Sort::REVERS);
	arrTwo->Print("two.txt");
	arrTwo->Selection();
	arrTwo->Print("twoSort_L_Rv.txt");              // ���� ��������� ���������� ���������� ������� ���������� ������������
	delete arrTwo;
	*/

	//***********SMALL***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::SMALL, Sort::REVERS);
	arrTwo->Print("two.txt");
	arrTwo->Selection();
	arrTwo->Print("twoSort_S_Rv.txt");               // ���� ��������� ���������� ���������� ������� ���������� ������������
	delete arrTwo;
	*/

	//***********MIDDLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::MIDDLE, Sort::REVERS);
	arrTwo->Print("two.txt");
	arrTwo->Selection();
	arrTwo->Print("twoSort_M_Rv.txt");               // ���� ��������� ���������� �������� ������� ���������� ������������
	delete arrTwo;
	*/

	//***********BIG***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::BIG, Sort::REVERS);
	arrTwo->Print("two.txt");
	arrTwo->Selection();
	arrTwo->Print("twoSort_B_Rv.txt");               // ���� ��������� ���������� �������� ������� ���������� ������������
	delete arrTwo;
	*/

	//***********GREAT***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::GREAT, Sort::REVERS);
	arrTwo->Print("two.txt");
	arrTwo->Selection();
	arrTwo->Print("twoSort_G_Rv.txt");               // ���� ��������� ���������� ����� �������� ������� ���������� ������������
	delete arrTwo;
	*/

	//***********HUGE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::HUGE, Sort::REVERS);
	arrTwo->Print("two.txt");
	arrTwo->Selection();
	arrTwo->Print("twoSort_H_Rv.txt");               // ���� ��������� ���������� ��������� ������� ���������� ������������
	delete arrTwo;
	*/

	//=========RANDOM===================
	//***********PUNY****************
	/*
	Sort *arrThree = new Sort();
	arrThree->GenerateArray(Sort::PUNY, Sort::RANDOM_ARR);
	arrThree->Print("three.txt");
	arrThree->Selection();
	arrThree->Print("threeSort_P_Rm.txt");               // ���� ��������� ���������� ����� ������� ���������� ����������
	delete arrThree;
	*/

	//***********LITTLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::LITTLE, Sort::RANDOM_ARR);
	arrThree->Print("three.txt");
	arrThree->Selection();
	arrThree->Print("threeSort_L_Rm.txt");               // ���� ��������� ���������� ���������� ���������� ����������
	delete arrThree;
	*/

	//***********SMALL***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::SMALL, Sort::RANDOM_ARR);
	arrThree->Print("three.txt");
	arrThree->Selection();
	arrThree->Print("threeSort_S_Rm.txt");               // ���� ��������� ���������� ���������� ���������� ����������
	delete arrThree;
	*/

	//***********MIDDLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::MIDDLE, Sort::RANDOM_ARR);
	arrThree->Print("three.txt");
	arrThree->Selection();
	arrThree->Print("threeSort_M_Rm.txt");               // ���� ��������� ���������� �������� ���������� ����������
	delete arrThree;
	*/

	//***********BIG***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::BIG, Sort::RANDOM_ARR);
	arrThree->Print("three.txt");
	arrThree->Selection();
	arrThree->Print("threeSort_B_Rm.txt");               // ���� ��������� ���������� �������� ���������� ����������
	delete arrThree;
	*/

	//***********GREAT***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::GREAT, Sort::RANDOM_ARR);
	arrThree->Print("three.txt");
	arrThree->Selection();
	arrThree->Print("threeSort_G_Rm.txt");               // ���� ��������� ���������� ����� �������� ���������� ����������
	delete arrThree;
	*/

	//***********HUGE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::HUGE, Sort::RANDOM_ARR);
	arrThree->Print("three.txt");
	arrThree->Selection();
	arrThree->Print("threeSort_H_Rm.txt");               // ���� ��������� ���������� ��������� ���������� ����������
	delete arrThree;
	*/


	// -------------------------------------------------- ���������� ��������� ------------------------------------------	
	//=========SORTED===================
	//***********PUNY****************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::PUNY, Sort::SORTED);
	arrOne->Print("Ins_one.txt");
	arrOne->Insert();
	arrOne->Print("Ins_oneSort_P_S.txt");               
	delete arrOne;
	*/

	//***********LITTLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::LITTLE, Sort::SORTED);
	arrOne->Print("Ins_one.txt");
	arrOne->Insert();
	arrOne->Print("Ins_oneSort_L_S.txt");               
	delete arrOne;
	*/

	//***********SMALL***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::SMALL, Sort::SORTED);
	arrOne->Print("Ins_one.txt");
	arrOne->Insert();
	arrOne->Print("Ins_oneSort_S_S.txt");               
	delete arrOne;
	*/

	//***********MIDDLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::MIDDLE, Sort::SORTED);
	arrOne->Print("Ins_one.txt");
	arrOne->Insert();
	arrOne->Print("Ins_oneSort_M_S.txt");               
	delete arrOne;
	*/

	//***********BIG***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::BIG, Sort::SORTED);
	arrOne->Print("Ins_one.txt");
	arrOne->Insert();
	arrOne->Print("Ins_oneSort_B_S.txt");               
	delete arrOne;
	*/
	
	//***********GREAT***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::GREAT, Sort::SORTED);
	arrOne->Print("Ins_one.txt");
	arrOne->Insert();
	arrOne->Print("Ins_oneSort_G_S.txt");               
	delete arrOne;
	*/
	
	//***********HUGE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::HUGE, Sort::SORTED);
	arrOne->Print("Ins_one.txt");
	arrOne->Insert();
	arrOne->Print("Ins_oneSort_H_S.txt");               
	delete arrOne;
	*/

	//=========REVERS===================
	//***********PUNY****************
	/*
	Sort *arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::PUNY, Sort::REVERS);
	arrTwo->Print("Ins_two.txt");
	arrTwo->Insert();
	arrTwo->Print("Ins_twoSort_P_Rv.txt");
	delete arrTwo;
	*/

	//***********LITTLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::LITTLE, Sort::REVERS);
	arrTwo->Print("Ins_two.txt");
	arrTwo->Insert();
	arrTwo->Print("Ins_twoSort_L_Rv.txt");
	delete arrTwo;
	*/

	//***********SMALL***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::SMALL, Sort::REVERS);
	arrTwo->Print("Ins_two.txt");
	arrTwo->Insert();
	arrTwo->Print("Ins_twoSort_S_Rv.txt");
	delete arrTwo;
	*/

	//***********MIDDLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::MIDDLE, Sort::REVERS);
	arrTwo->Print("Ins_two.txt");
	arrTwo->Insert();
	arrTwo->Print("Ins_twoSort_M_Rv.txt");
	delete arrTwo;
	*/

	//***********BIG***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::BIG, Sort::REVERS);
	arrTwo->Print("Ins_two.txt");
	arrTwo->Insert();
	arrTwo->Print("Ins_twoSort_B_Rv.txt");
	delete arrTwo;
	*/

	//***********GREAT***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::GREAT, Sort::REVERS);
	arrTwo->Print("Ins_two.txt");
	arrTwo->Insert();
	arrTwo->Print("Ins_twoSort_G_Rv.txt");
	delete arrTwo;
	*/

	//***********HUGE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::HUGE, Sort::REVERS);
	arrTwo->Print("Ins_two.txt");
	arrTwo->Insert();
	arrTwo->Print("Ins_twoSort_H_Rv.txt");
	delete arrTwo;
	*/

	//=========RANDOM===================
	//***********PUNY****************
	/*
	Sort *arrThree = new Sort();
	arrThree->GenerateArray(Sort::PUNY, Sort::RANDOM_ARR);
	arrThree->Print("Ins_three.txt");
	arrThree->Insert();
	arrThree->Print("Ins_threeSort_P_Rm.txt");
	delete arrThree;
	*/

	//***********LITTLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::LITTLE, Sort::RANDOM_ARR);
	arrThree->Print("Ins_three.txt");
	arrThree->Insert();
	arrThree->Print("Ins_threeSort_L_Rm.txt");
	delete arrThree;
	*/

	//***********SMALL***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::SMALL, Sort::RANDOM_ARR);
	arrThree->Print("Ins_three.txt");
	arrThree->Insert();
	arrThree->Print("Ins_threeSort_S_Rm.txt");
	delete arrThree;
	*/

	//***********MIDDLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::MIDDLE, Sort::RANDOM_ARR);
	arrThree->Print("Ins_three.txt");
	arrThree->Insert();
	arrThree->Print("Ins_threeSort_M_Rm.txt");
	delete arrThree;
	*/

	//***********BIG***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::BIG, Sort::RANDOM_ARR);
	arrThree->Print("Ins_three.txt");
	arrThree->Insert();
	arrThree->Print("Ins_threeSort_B_Rm.txt");
	delete arrThree;
	*/

	//***********GREAT***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::GREAT, Sort::RANDOM_ARR);
	arrThree->Print("Ins_three.txt");
	arrThree->Insert();
	arrThree->Print("Ins_threeSort_G_Rm.txt");
	delete arrThree;
	*/

	//***********HUGE***************	
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::HUGE, Sort::RANDOM_ARR);
	arrThree->Print("Ins_three.txt");
	arrThree->Insert();
	arrThree->Print("Ins_threeSort_H_Rm.txt");
	delete arrThree;
	*/


	// -------------------------------------------------- ���������� ����� ------------------------------------------	
	//=========SORTED===================
	//***********PUNY****************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::PUNY, Sort::SORTED);
	arrOne->Print("Shell_one.txt");
	arrOne->SortByShell();
	arrOne->Print("Shell_oneSort_P_S.txt");
	delete arrOne;
	*/

	//***********LITTLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::LITTLE, Sort::SORTED);
	arrOne->Print("Shell_one.txt");
	arrOne->SortByShell();
	arrOne->Print("Shell_oneSort_L_S.txt");
	delete arrOne;
	*/

	//***********SMALL***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::SMALL, Sort::SORTED);
	arrOne->Print("Shell_one.txt");
	arrOne->SortByShell();
	arrOne->Print("Shell_oneSort_S_S.txt");
	delete arrOne;
	*/

	//***********MIDDLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::MIDDLE, Sort::SORTED);
	arrOne->Print("Shell_one.txt");
	arrOne->SortByShell();
	arrOne->Print("Shell_oneSort_M_S.txt");
	delete arrOne;
	*/

	//***********BIG***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::BIG, Sort::SORTED);
	arrOne->Print("Shell_one.txt");
	arrOne->SortByShell();
	arrOne->Print("Shell_oneSort_B_S.txt");
	delete arrOne;
	*/

	//***********GREAT***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::GREAT, Sort::SORTED);
	arrOne->Print("Shell_one.txt");
	arrOne->SortByShell();
	arrOne->Print("Shell_oneSort_G_S.txt");
	delete arrOne;
	*/

	//***********HUGE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::HUGE, Sort::SORTED);
	arrOne->Print("Shell_one.txt");
	arrOne->SortByShell();
	arrOne->Print("Shell_oneSort_H_S.txt");
	delete arrOne;
	*/

	//=========REVERS===================
	//***********PUNY****************
	/*
	Sort *arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::PUNY, Sort::REVERS);
	arrTwo->Print("Shell_two.txt");
	arrTwo->SortByShell();
	arrTwo->Print("Shell_twoSort_P_Rv.txt");
	delete arrTwo;
	*/

	//***********LITTLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::LITTLE, Sort::REVERS);
	arrTwo->Print("Shell_two.txt");
	arrTwo->SortByShell();
	arrTwo->Print("Shell_twoSort_L_Rv.txt");
	delete arrTwo;
	*/

	//***********SMALL***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::SMALL, Sort::REVERS);
	arrTwo->Print("Shell_two.txt");
	arrTwo->SortByShell();
	arrTwo->Print("Shell_twoSort_S_Rv.txt");
	delete arrTwo;
	*/

	//***********MIDDLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::MIDDLE, Sort::REVERS);
	arrTwo->Print("Shell_two.txt");
	arrTwo->SortByShell();
	arrTwo->Print("Shell_twoSort_M_Rv.txt");
	delete arrTwo;
	*/

	//***********BIG***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::BIG, Sort::REVERS);
	arrTwo->Print("Shell_two.txt");
	arrTwo->SortByShell();
	arrTwo->Print("Shell_twoSort_B_Rv.txt");
	delete arrTwo;
	*/

	//***********GREAT***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::GREAT, Sort::REVERS);
	arrTwo->Print("Shell_two.txt");
	arrTwo->SortByShell();
	arrTwo->Print("Shell_twoSort_G_Rv.txt");
	delete arrTwo;
	*/

	//***********HUGE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::HUGE, Sort::REVERS);
	arrTwo->Print("Shell_two.txt");
	arrTwo->SortByShell();
	arrTwo->Print("Shell_twoSort_H_Rv.txt");
	delete arrTwo;
	*/

	//=========RANDOM===================
	//***********PUNY****************
	/*
	Sort *arrThree = new Sort();
	arrThree->GenerateArray(Sort::PUNY, Sort::RANDOM_ARR);
	arrThree->Print("Shell_three.txt");
	arrThree->SortByShell();
	arrThree->Print("Shell_threeSort_P_Rm.txt");
	delete arrThree;
	*/

	//***********LITTLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::LITTLE, Sort::RANDOM_ARR);
	arrThree->Print("Shell_three.txt");
	arrThree->SortByShell();
	arrThree->Print("Shell_threeSort_L_Rm.txt");
	delete arrThree;
	*/

	//***********SMALL***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::SMALL, Sort::RANDOM_ARR);
	arrThree->Print("Shell_three.txt");
	arrThree->SortByShell();
	arrThree->Print("Shell_threeSort_S_Rm.txt");
	delete arrThree;
	*/

	//***********MIDDLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::MIDDLE, Sort::RANDOM_ARR);
	arrThree->Print("Shell_three.txt");
	arrThree->SortByShell();
	arrThree->Print("Shell_threeSort_M_Rm.txt");
	delete arrThree;
	*/

	//***********BIG***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::BIG, Sort::RANDOM_ARR);
	arrThree->Print("Shell_three.txt");
	arrThree->SortByShell();
	arrThree->Print("Shell_threeSort_B_Rm.txt");
	delete arrThree;
	*/

	//***********GREAT***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::GREAT, Sort::RANDOM_ARR);
	arrThree->Print("Shell_three.txt");
	arrThree->SortByShell();
	arrThree->Print("Shell_threeSort_G_Rm.txt");
	delete arrThree;
	*/

	//***********HUGE***************	
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::HUGE, Sort::RANDOM_ARR);
	arrThree->Print("Shell_three.txt");
	arrThree->SortByShell();
	arrThree->Print("Shell_threeSort_H_Rm.txt");
	delete arrThree;
	*/

	// -------------------------------------------------- ���������� ������� ------------------------------------------	
	//=========SORTED===================
	//***********PUNY****************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::PUNY, Sort::SORTED);
	arrOne->Print("Quick_one.txt");
	arrOne->Quick();
	arrOne->Print("Quick_oneSort_P_S.txt");
	delete arrOne;
	*/

	//***********LITTLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::LITTLE, Sort::SORTED);
	arrOne->Print("Quick_one.txt");
	arrOne->Quick();
	arrOne->Print("Quick_oneSort_L_S.txt");
	delete arrOne;
	*/

	//***********SMALL***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::SMALL, Sort::SORTED);
	arrOne->Print("Quick_one.txt");
	arrOne->Quick();
	arrOne->Print("Quick_oneSort_S_S.txt");
	delete arrOne;
	*/

	//***********MIDDLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::MIDDLE, Sort::SORTED);
	arrOne->Print("Quick_one.txt");
	arrOne->Quick();
	arrOne->Print("Quick_oneSort_M_S.txt");
	delete arrOne;
	*/

	//***********BIG***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::BIG, Sort::SORTED);
	arrOne->Print("Quick_one.txt");
	arrOne->Quick();
	arrOne->Print("Quick_oneSort_B_S.txt");
	delete arrOne;
	*/

	//***********GREAT***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::GREAT, Sort::SORTED);
	arrOne->Print("Quick_one.txt");
	arrOne->Quick();
	arrOne->Print("Quick_oneSort_G_S.txt");
	delete arrOne;
	*/

	//***********HUGE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::HUGE, Sort::SORTED);
	arrOne->Print("Quick_one.txt");
	arrOne->Quick();
	arrOne->Print("Quick_oneSort_H_S.txt");
	delete arrOne;
	*/

	//=========REVERS===================
	//***********PUNY****************
	/*
	Sort *arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::PUNY, Sort::REVERS);
	arrTwo->Print("Quick_two.txt");
	arrTwo->Quick();
	arrTwo->Print("Quick_twoSort_P_Rv.txt");
	delete arrTwo;
	*/

	//***********LITTLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::LITTLE, Sort::REVERS);
	arrTwo->Print("Quick_two.txt");
	arrTwo->Quick();
	arrTwo->Print("Quick_twoSort_L_Rv.txt");
	delete arrTwo;
	*/

	//***********SMALL***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::SMALL, Sort::REVERS);
	arrTwo->Print("Quick_two.txt");
	arrTwo->Quick();
	arrTwo->Print("Quick_twoSort_S_Rv.txt");
	delete arrTwo;
	*/

	//***********MIDDLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::MIDDLE, Sort::REVERS);
	arrTwo->Print("Quick_two.txt");
	arrTwo->Quick();
	arrTwo->Print("Quick_twoSort_M_Rv.txt");
	delete arrTwo;
	*/

	//***********BIG***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::BIG, Sort::REVERS);
	arrTwo->Print("Quick_two.txt");
	arrTwo->Quick();
	arrTwo->Print("Quick_twoSort_B_Rv.txt");
	delete arrTwo;
	*/

	//***********GREAT***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::GREAT, Sort::REVERS);
	arrTwo->Print("Quick_two.txt");
	arrTwo->Quick();
	arrTwo->Print("Quick_twoSort_G_Rv.txt");
	delete arrTwo;
	*/

	//***********HUGE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::HUGE, Sort::REVERS);
	arrTwo->Print("Quick_two.txt");
	arrTwo->Quick();
	arrTwo->Print("Quick_twoSort_H_Rv.txt");
	delete arrTwo;
	*/

	//=========RANDOM===================
	//***********PUNY****************
	/*
	Sort *arrThree = new Sort();
	arrThree->GenerateArray(Sort::PUNY, Sort::RANDOM_ARR);
	arrThree->Print("Quick_three.txt");
	arrThree->Quick();
	arrThree->Print("Quick_threeSort_P_Rm.txt");
	delete arrThree;
	*/

	//***********LITTLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::LITTLE, Sort::RANDOM_ARR);
	arrThree->Print("Quick_three.txt");
	arrThree->Quick();
	arrThree->Print("Quick_threeSort_L_Rm.txt");
	delete arrThree;
	*/

	//***********SMALL***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::SMALL, Sort::RANDOM_ARR);
	arrThree->Print("Quick_three.txt");
	arrThree->Quick();
	arrThree->Print("Quick_threeSort_S_Rm.txt");
	delete arrThree;
	*/

	//***********MIDDLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::MIDDLE, Sort::RANDOM_ARR);
	arrThree->Print("Quick_three.txt");
	arrThree->Quick();
	arrThree->Print("Quick_threeSort_M_Rm.txt");
	delete arrThree;
	*/

	//***********BIG***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::BIG, Sort::RANDOM_ARR);
	arrThree->Print("Quick_three.txt");
	arrThree->Quick();
	arrThree->Print("Quick_threeSort_B_Rm.txt");
	delete arrThree;
	*/

	//***********GREAT***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::GREAT, Sort::RANDOM_ARR);
	arrThree->Print("Quick_three.txt");
	arrThree->Quick();
	arrThree->Print("Quick_threeSort_G_Rm.txt");
	delete arrThree;
	*/

	//***********HUGE***************	
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::HUGE, Sort::RANDOM_ARR);
	arrThree->Print("Quick_three.txt");
	arrThree->Quick();
	arrThree->Print("Quick_threeSort_H_Rm.txt");
	delete arrThree;
	*/



	// -------------------------------------------------- ���������� �������� ------------------------------------------	
	//=========SORTED===================
	//***********PUNY****************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::PUNY, Sort::SORTED);
	arrOne->Print("Merge_one.txt");
	arrOne->Merging();
	arrOne->Print("Merge_oneSort_P_S.txt");
	delete arrOne;
	*/

	//***********LITTLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::LITTLE, Sort::SORTED);
	arrOne->Print("Merge_one.txt");
	arrOne->Merging();
	arrOne->Print("Merge_oneSort_L_S.txt");
	delete arrOne;
	*/

	//***********SMALL***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::SMALL, Sort::SORTED);
	arrOne->Print("Merge_one.txt");
	arrOne->Merging();
	arrOne->Print("Merge_oneSort_S_S.txt");
	delete arrOne;
	*/

	//***********MIDDLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::MIDDLE, Sort::SORTED);
	arrOne->Print("Merge_one.txt");
	arrOne->Merging();
	arrOne->Print("Merge_oneSort_M_S.txt");
	delete arrOne;
	*/

	//***********BIG***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::BIG, Sort::SORTED);
	arrOne->Print("Merge_one.txt");
	arrOne->Merging();
	arrOne->Print("Merge_oneSort_B_S.txt");
	delete arrOne;
	*/

	//***********GREAT***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::GREAT, Sort::SORTED);
	arrOne->Print("Merge_one.txt");
	arrOne->Merging();
	arrOne->Print("Merge_oneSort_G_S.txt");
	delete arrOne;
	*/

	//***********HUGE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::HUGE, Sort::SORTED);
	arrOne->Print("Merge_one.txt");
	arrOne->Merging();
	arrOne->Print("Merge_oneSort_H_S.txt");
	delete arrOne;
	*/

	//=========REVERS===================
	//***********PUNY****************
	/*
	Sort *arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::PUNY, Sort::REVERS);
	arrTwo->Print("Merge_two.txt");
	arrTwo->Merging();
	arrTwo->Print("Merge_twoSort_P_Rv.txt");
	delete arrTwo;	
	*/

	//***********LITTLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::LITTLE, Sort::REVERS);
	arrTwo->Print("Merge_two.txt");
	arrTwo->Merging();
	arrTwo->Print("Merge_twoSort_L_Rv.txt");
	delete arrTwo;
	*/

	//***********SMALL***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::SMALL, Sort::REVERS);
	arrTwo->Print("Merge_two.txt");
	arrTwo->Merging();
	arrTwo->Print("Merge_twoSort_S_Rv.txt");
	delete arrTwo;
	*/

	//***********MIDDLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::MIDDLE, Sort::REVERS);
	arrTwo->Print("Merge_two.txt");
	arrTwo->Merging();
	arrTwo->Print("Merge_twoSort_M_Rv.txt");
	delete arrTwo;
	*/

	//***********BIG***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::BIG, Sort::REVERS);
	arrTwo->Print("Merge_two.txt");
	arrTwo->Merging();
	arrTwo->Print("Merge_twoSort_B_Rv.txt");
	delete arrTwo;
	*/

	//***********GREAT***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::GREAT, Sort::REVERS);
	arrTwo->Print("Merge_two.txt");
	arrTwo->Merging();
	arrTwo->Print("Merge_twoSort_G_Rv.txt");
	delete arrTwo;
	*/

	//***********HUGE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::HUGE, Sort::REVERS);
	arrTwo->Print("Merge_two.txt");
	arrTwo->Merging();
	arrTwo->Print("Merge_twoSort_H_Rv.txt");
	delete arrTwo;
	*/

	//=========RANDOM===================
	//***********PUNY****************
	/*
	Sort *arrThree = new Sort();
	arrThree->GenerateArray(Sort::PUNY, Sort::RANDOM_ARR);
	arrThree->Print("Merge_three.txt");
	arrThree->Merging();
	arrThree->Print("Merge_threeSort_P_Rm.txt");
	delete arrThree;
	*/

	//***********LITTLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::LITTLE, Sort::RANDOM_ARR);
	arrThree->Print("Merge_three.txt");
	arrThree->Merging();
	arrThree->Print("Merge_threeSort_L_Rm.txt");
	delete arrThree;
	*/

	//***********SMALL***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::SMALL, Sort::RANDOM_ARR);
	arrThree->Print("Merge_three.txt");
	arrThree->Merging();
	arrThree->Print("Merge_threeSort_S_Rm.txt");
	delete arrThree;
	*/

	//***********MIDDLE***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::MIDDLE, Sort::RANDOM_ARR);
	arrThree->Print("Merge_three.txt");
	arrThree->Merging();
	arrThree->Print("Merge_threeSort_M_Rm.txt");
	delete arrThree;
	*/

	//***********BIG***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::BIG, Sort::RANDOM_ARR);
	arrThree->Print("Merge_three.txt");
	arrThree->Merging();
	arrThree->Print("Merge_threeSort_B_Rm.txt");
	delete arrThree;
	*/

	//***********GREAT***************
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::GREAT, Sort::RANDOM_ARR);
	arrThree->Print("Merge_three.txt");
	arrThree->Merging();
	arrThree->Print("Merge_threeSort_G_Rm.txt");
	delete arrThree;
	*/

	//***********HUGE***************	
	/*
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::HUGE, Sort::RANDOM_ARR);
	arrThree->Print("Merge_three.txt");
	arrThree->Merging();
	arrThree->Print("Merge_threeSort_H_Rm.txt");
	delete arrThree;
	*/


	// -------------------------------------------------- ����������  ����������� -----------------------------------------	
	//=========SORTED===================
	//***********PUNY****************
	/*
	Sort *arrOne = new Sort();
	arrOne->GenerateArray(Sort::PUNY, Sort::SORTED);
	arrOne->Print("Radix_one.txt");
	arrOne->RadixSort();
	arrOne->Print("Radix_oneSort_P_S.txt");
	delete arrOne;
	*/

	//***********LITTLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::LITTLE, Sort::SORTED);
	arrOne->Print("Radix_one.txt");
	arrOne->RadixSort();
	arrOne->Print("Radix_oneSort_L_S.txt");
	delete arrOne;
	*/

	//***********SMALL***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::SMALL, Sort::SORTED);
	arrOne->Print("Radix_one.txt");
	arrOne->RadixSort();
	arrOne->Print("Radix_oneSort_S_S.txt");
	delete arrOne;
	*/

	//***********MIDDLE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::MIDDLE, Sort::SORTED);
	arrOne->Print("Radix_one.txt");
	arrOne->RadixSort();
	arrOne->Print("Radix_oneSort_M_S.txt");
	delete arrOne;
	*/

	//***********BIG***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::BIG, Sort::SORTED);
	arrOne->Print("Radix_one.txt");
	arrOne->RadixSort();
	arrOne->Print("Radix_oneSort_B_S.txt");
	delete arrOne;
	*/

	//***********GREAT***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::GREAT, Sort::SORTED);
	arrOne->Print("Radix_one.txt");
	arrOne->RadixSort();
	arrOne->Print("Radix_oneSort_G_S.txt");
	delete arrOne;
	*/

	//***********HUGE***************
	/*
	arrOne = new Sort();
	arrOne->GenerateArray(Sort::HUGE, Sort::SORTED);
	arrOne->Print("Radix_one.txt");
	arrOne->RadixSort();
	arrOne->Print("Radix_oneSort_H_S.txt");
	delete arrOne;
	*/

	//=========REVERS===================
	//***********PUNY****************
	/*
	Sort *arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::PUNY, Sort::REVERS);
	arrTwo->Print("Radix_two.txt");
	arrTwo->RadixSort();
	arrTwo->Print("Radix_twoSort_P_Rv.txt");
	delete arrTwo;
	*/

	//***********LITTLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::LITTLE, Sort::REVERS);
	arrTwo->Print("Radix_two.txt");
	arrTwo->RadixSort();
	arrTwo->Print("Radix_twoSort_L_Rv.txt");
	delete arrTwo;
	*/

	//***********SMALL***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::SMALL, Sort::REVERS);
	arrTwo->Print("Radix_two.txt");
	arrTwo->RadixSort();
	arrTwo->Print("Radix_twoSort_S_Rv.txt");
	delete arrTwo;
	*/

	//***********MIDDLE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::MIDDLE, Sort::REVERS);
	arrTwo->Print("Radix_two.txt");
	arrTwo->RadixSort();
	arrTwo->Print("Radix_twoSort_M_Rv.txt");
	delete arrTwo;
	*/

	//***********BIG***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::BIG, Sort::REVERS);
	arrTwo->Print("Radix_two.txt");
	arrTwo->RadixSort();
	arrTwo->Print("Radix_twoSort_B_Rv.txt");
	delete arrTwo;
	*/

	//***********GREAT***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::GREAT, Sort::REVERS);
	arrTwo->Print("Radix_two.txt");
	arrTwo->RadixSort();
	arrTwo->Print("Radix_twoSort_G_Rv.txt");
	delete arrTwo;
	*/

	//***********HUGE***************
	/*
	arrTwo = new Sort();
	arrTwo->GenerateArray(Sort::HUGE, Sort::REVERS);
	arrTwo->Print("Radix_two.txt");
	arrTwo->RadixSort();
	arrTwo->Print("Radix_twoSort_H_Rv.txt");
	delete arrTwo;
	*/

	//=========RANDOM===================
	//***********PUNY****************
	
	Sort *arrThree = new Sort();
	arrThree->GenerateArray(Sort::PUNY, Sort::REVERS);
	arrThree->Print("Radix_three.txt");
	arrThree->RadixSort();
	arrThree->Print("Radix_threeSort_P_Rm.txt");
	delete arrThree;
	

	//***********LITTLE***************
	
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::LITTLE, Sort::RANDOM_ARR);
	arrThree->Print("Radix_three.txt");
	arrThree->RadixSort();
	arrThree->Print("Radix_threeSort_L_Rm.txt");
	delete arrThree;
	

	//***********SMALL***************
	
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::SMALL, Sort::RANDOM_ARR);
	arrThree->Print("Radix_three.txt");
	arrThree->RadixSort();
	arrThree->Print("Radix_threeSort_S_Rm.txt");
	delete arrThree;
	

	//***********MIDDLE***************
	
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::MIDDLE, Sort::RANDOM_ARR);
	arrThree->Print("Radix_three.txt");
	arrThree->RadixSort();
	arrThree->Print("Radix_threeSort_M_Rm.txt");
	delete arrThree;
	

	//***********BIG***************
	
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::BIG, Sort::RANDOM_ARR);
	arrThree->Print("Radix_three.txt");
	arrThree->RadixSort();
	arrThree->Print("Radix_threeSort_B_Rm.txt");
	delete arrThree;
	

	//***********GREAT***************
	
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::GREAT, Sort::RANDOM_ARR);
	arrThree->Print("Radix_three.txt");
	arrThree->RadixSort();
	arrThree->Print("Radix_threeSort_G_Rm.txt");
	delete arrThree;
	

	//***********HUGE***************	
	
	arrThree = new Sort();
	arrThree->GenerateArray(Sort::HUGE, Sort::RANDOM_ARR);
	arrThree->Print("Radix_three.txt");
	arrThree->RadixSort();
	arrThree->Print("Radix_threeSort_H_Rm.txt");
	delete arrThree;
	


	return 0;
}