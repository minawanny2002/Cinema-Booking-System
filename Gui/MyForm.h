#pragma once
#include "Header.h"

#include <string>




namespace Gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	
	/// <summary>
    
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
		

	public:
		MyForm(void)
		{
			InitializeComponent();
            
			
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Button^ Movies;
	private: System::Windows::Forms::Button^ Timing;
	private: System::Windows::Forms::Button^ Booking;
	private: System::Windows::Forms::Button^ About;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ back1;
	private: System::Windows::Forms::Button^ batman;

	private: System::Windows::Forms::Button^ rednotice;
	private: System::Windows::Forms::Button^ scream;
	private: System::Windows::Forms::Button^ encanto;
	private: System::Windows::Forms::Button^ spiderman;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ spidermaninfo;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ spidermanrating;
	private: System::Windows::Forms::Label^ spidermanduration;
	private: System::Windows::Forms::Label^ spidermanhall;
	private: System::Windows::Forms::Label^ spidermanactor3;
	private: System::Windows::Forms::Label^ spidermanactor2;
	private: System::Windows::Forms::Label^ spidermanactor1;
	private: System::Windows::Forms::Label^ spidermandirector;
	private: System::Windows::Forms::Label^ spidermanname;
	private: System::Windows::Forms::Button^ back2;
	private: System::Windows::Forms::Panel^ batinfo;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ batrating;
	private: System::Windows::Forms::Label^ batduration;
	private: System::Windows::Forms::Label^ bathall;
	private: System::Windows::Forms::Label^ batactor3;
	private: System::Windows::Forms::Label^ batactor2;
	private: System::Windows::Forms::Label^ batactor1;
	private: System::Windows::Forms::Label^ batdirector;
	private: System::Windows::Forms::Label^ batname;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ screaminfo;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ screamrating;
	private: System::Windows::Forms::Label^ screamduration;
	private: System::Windows::Forms::Label^ screamhall;
	private: System::Windows::Forms::Label^ screamactor3;
	private: System::Windows::Forms::Label^ screamactor2;
	private: System::Windows::Forms::Label^ screamactor1;
	private: System::Windows::Forms::Label^ screamdirector;
	private: System::Windows::Forms::Label^ screamname;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Panel^ encantoinfo;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Label^ encantorating;
    private: System::Windows::Forms::Label^ encantoduration;
    private: System::Windows::Forms::Label^ encantohall;
    private: System::Windows::Forms::Label^ encantoactor3;
    private: System::Windows::Forms::Label^ encantoactor2;
    private: System::Windows::Forms::Label^ encantoactor1;
    private: System::Windows::Forms::Label^ encantodirector;
    private: System::Windows::Forms::Label^ encantoname;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::Panel^ redinfo;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Label^ redrating;
    private: System::Windows::Forms::Label^ redduration;
    private: System::Windows::Forms::Label^ redhall;
    private: System::Windows::Forms::Label^ redactor3;
    private: System::Windows::Forms::Label^ redactor2;
    private: System::Windows::Forms::Label^ redactor1;
    private: System::Windows::Forms::Label^ reddirector;
    private: System::Windows::Forms::Label^ redname;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Panel^ timing_panel;

private: System::Windows::Forms::Button^ batman_timing;
private: System::Windows::Forms::Button^ scream_timing;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ encanto_timing;
private: System::Windows::Forms::Button^ rednotices_timing;
private: System::Windows::Forms::Button^ spiderman_timing1;
private: System::Windows::Forms::Panel^ threeH_panel;

private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Panel^ twoH_timing;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::Panel^ bookingpanel;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::ListBox^ listBox4;
private: System::Windows::Forms::Button^ spiderbooking;
private: System::Windows::Forms::Button^ screambooking;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ encantobooking;
private: System::Windows::Forms::Button^ redbooking;
private: System::Windows::Forms::Button^ batbooking;
private: System::Windows::Forms::Panel^ batuserbooking;


private: System::Windows::Forms::Label^ label12;

private: System::Windows::Forms::Label^ Totalprice;


private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::ComboBox^ batcombobox;
private: System::Windows::Forms::Button^ batreservationbutton;
private: System::ComponentModel::IContainer^ components;
private: System::Windows::Forms::Panel^ reservationcompletepanel;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Panel^ party_is_full_panel;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Panel^ remender_ticket_panel;

private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Panel^ suggestionpanel;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button21;

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Panel^ spideruserbooking;

private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Button^ spiderreservationbutton;

private: System::Windows::Forms::ComboBox^ spidercomboBox;
private: System::Windows::Forms::Label^ totalprice2;

private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Panel^ screamuserbooking;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Label^ label61;

private: System::Windows::Forms::ComboBox^ screamcomboBox;
private: System::Windows::Forms::Label^ totalprice3;





private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Button^ screamreservationbutton;
private: System::Windows::Forms::Panel^ reduserbooking;

private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Button^ redreservationbutton;
private: System::Windows::Forms::ComboBox^ redcomboBox;
private: System::Windows::Forms::Label^ totalprice4;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Panel^ encantouserbooking;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Button^ encantoreservationbutton;

private: System::Windows::Forms::ComboBox^ encantocomboBox;
private: System::Windows::Forms::Label^ totalprice5;

private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Panel^ aboutuspanel;
private: System::Windows::Forms::Label^ aboutuslabel;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::Button^ button57;


private: System::Windows::Forms::Label^ label51;












	protected:


	protected:

	private:
		/// <summary>
        /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
        
        
      

void choices_of_remtickets(int movienum, int screennum, int numtickets)
{
    int remtickets;
    remtickets = 100 - movies[movienum - 1].screen_info.hall.reseved_seats[screennum];
    MessageBox::Show(Convert::ToString(remtickets), "Available Tickets");
}

void comparison_movie_1_2(int numtickets, int movienum, int screennum, int time)
{

    if (Globtime > time ) {
    suggestion_of_screens_1_2(numtickets, movienum, screennum);
    }

    else if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum] <= movies[movienum - 1].screen_info.hall.capacity[screennum]) 
    {


        MessageBox::Show("Booking Is Completed");
        movies[movienum - 1].screen_info.hall.reseved_seats[screennum] += numtickets;
    }



    else if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum] > movies[movienum - 1].screen_info.hall.capacity[screennum]) 
    {
        if (movies[movienum - 1].screen_info.hall.reseved_seats[screennum] == 100) {
            MessageBox::Show("No Seats Available");

        }

        else
        {
            choices_of_remtickets(movienum, screennum, numtickets);
        }
    }

}
void comparison_movie_3_4_5(int numtickets, int movienum, int screennum, int time)
{
    if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum] <= movies[movienum - 1].screen_info.hall.capacity[screennum]) 
    {


        MessageBox::Show("Reservation Is Completed");
        movies[movienum - 1].screen_info.hall.reseved_seats[screennum] += numtickets;

    }

    else if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum] > movies[movienum - 1].screen_info.hall.capacity[screennum]) 
    {
        if (movies[movienum - 1].screen_info.hall.reseved_seats[screennum] == 100) 
        {
            MessageBox::Show("No Seats Available Today");

        }

        else 
        {
            choices_of_remtickets(movienum, screennum, numtickets);
        }
    }

    else if (Globtime > time) 
    {
        suggestion_of_screens_3_4_5(numtickets, movienum , screennum);
    }
}
void comparison(int movienum, int screennum, int numticket) 
{
	if (movienum == 1 || movienum == 2)
    {
		if (screennum == 0)
			comparison_movie_1_2(numticket, movienum, screennum, 615);
		else if (screennum == 1)
			comparison_movie_1_2(numticket, movienum, screennum, 825);
		else if (screennum == 2)
			comparison_movie_1_2(numticket, movienum, screennum, 1035);
		else if (screennum == 3)
			comparison_movie_1_2(numticket, movienum, screennum, 1245);

	}
    else if (movienum == 3 || movienum == 4 || movienum == 5)
    {
        if (screennum == 0)
            comparison_movie_3_4_5(numticket, movienum, screennum, 615);
        else if (screennum == 1)
            comparison_movie_3_4_5(numticket, movienum, screennum, 765);
        else if (screennum == 2)
            comparison_movie_3_4_5(numticket, movienum, screennum, 915);
        else if (screennum == 3)
            comparison_movie_3_4_5(numticket, movienum, screennum, 1065);
        else if (screennum == 4)
            comparison_movie_3_4_5(numticket, movienum, screennum, 1215);
        else if (screennum == 5)
            comparison_movie_3_4_5(numticket, movienum, screennum, 1365);
    }
}

void suggestion_of_screens_1_2(int numtickets, int movienum , int screennum)
{
    int Movietime[4] = { 600, 810, 1020,1230 };
    int n = 0;
    
	for (int j = 1; j < 4; j++)
    {
         if(j > screennum && Globtime <= Movietime[j])
         {
                if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[j] <= movies[movienum - 1].screen_info.hall.capacity[j])
                {
                    n = j ;
                    n++;
                    break;
                  
                    
                }

         }
         break;

        
         
    }
    label51->Text = Convert::ToString(n);
    suggestionpanel->Show();
    suggestionpanel->Dock = System::Windows::Forms::DockStyle::Fill;
    if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[n-1] >= movies[movienum - 1].screen_info.hall.capacity[n-1])
    {
        suggestionpanel->Hide();
        MessageBox::Show("No Seats Available Today");
    }
}
void suggestion_of_screens_3_4_5(int numtickets, int movienum, int screennum)
{
    int Movietime[6] = { 600, 750, 900, 1050, 1200,  1350 };
    int n = 0;
    

		for (int j = 1; j < 6; j++) {
            if (j > screennum && Globtime <= Movietime[j])
            {
                if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[j] <= movies[movienum - 1].screen_info.hall.capacity[j])
                {
                    n = j;
                    n++;
                    break;


                }
            }
            
		}

        label51->Text = Convert::ToString(n);
        suggestionpanel->Show();
        suggestionpanel->Dock = System::Windows::Forms::DockStyle::Fill;
        if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[n-1] >= movies[movienum - 1].screen_info.hall.capacity[n-1])
        {

            suggestionpanel->Hide();
            MessageBox::Show("No Seats Available Today");
        }
	}





		/// </summary>
        
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->title = (gcnew System::Windows::Forms::Label());
            this->Movies = (gcnew System::Windows::Forms::Button());
            this->Timing = (gcnew System::Windows::Forms::Button());
            this->Booking = (gcnew System::Windows::Forms::Button());
            this->About = (gcnew System::Windows::Forms::Button());
            this->Exit = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->redinfo = (gcnew System::Windows::Forms::Panel());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->redrating = (gcnew System::Windows::Forms::Label());
            this->redduration = (gcnew System::Windows::Forms::Label());
            this->redhall = (gcnew System::Windows::Forms::Label());
            this->redactor3 = (gcnew System::Windows::Forms::Label());
            this->redactor2 = (gcnew System::Windows::Forms::Label());
            this->redactor1 = (gcnew System::Windows::Forms::Label());
            this->reddirector = (gcnew System::Windows::Forms::Label());
            this->redname = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->batinfo = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->batrating = (gcnew System::Windows::Forms::Label());
            this->batduration = (gcnew System::Windows::Forms::Label());
            this->bathall = (gcnew System::Windows::Forms::Label());
            this->batactor3 = (gcnew System::Windows::Forms::Label());
            this->batactor2 = (gcnew System::Windows::Forms::Label());
            this->batactor1 = (gcnew System::Windows::Forms::Label());
            this->batdirector = (gcnew System::Windows::Forms::Label());
            this->batname = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->encantoinfo = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->encantorating = (gcnew System::Windows::Forms::Label());
            this->encantoduration = (gcnew System::Windows::Forms::Label());
            this->encantohall = (gcnew System::Windows::Forms::Label());
            this->encantoactor3 = (gcnew System::Windows::Forms::Label());
            this->encantoactor2 = (gcnew System::Windows::Forms::Label());
            this->encantoactor1 = (gcnew System::Windows::Forms::Label());
            this->encantodirector = (gcnew System::Windows::Forms::Label());
            this->encantoname = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->spidermaninfo = (gcnew System::Windows::Forms::Panel());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->back2 = (gcnew System::Windows::Forms::Button());
            this->spidermanrating = (gcnew System::Windows::Forms::Label());
            this->spidermanduration = (gcnew System::Windows::Forms::Label());
            this->spidermanhall = (gcnew System::Windows::Forms::Label());
            this->spidermanactor3 = (gcnew System::Windows::Forms::Label());
            this->spidermanactor2 = (gcnew System::Windows::Forms::Label());
            this->spidermanactor1 = (gcnew System::Windows::Forms::Label());
            this->spidermandirector = (gcnew System::Windows::Forms::Label());
            this->spidermanname = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->batman = (gcnew System::Windows::Forms::Button());
            this->rednotice = (gcnew System::Windows::Forms::Button());
            this->screaminfo = (gcnew System::Windows::Forms::Panel());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->screamrating = (gcnew System::Windows::Forms::Label());
            this->screamduration = (gcnew System::Windows::Forms::Label());
            this->screamhall = (gcnew System::Windows::Forms::Label());
            this->screamactor3 = (gcnew System::Windows::Forms::Label());
            this->screamactor2 = (gcnew System::Windows::Forms::Label());
            this->screamactor1 = (gcnew System::Windows::Forms::Label());
            this->screamdirector = (gcnew System::Windows::Forms::Label());
            this->screamname = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->scream = (gcnew System::Windows::Forms::Button());
            this->encanto = (gcnew System::Windows::Forms::Button());
            this->spiderman = (gcnew System::Windows::Forms::Button());
            this->back1 = (gcnew System::Windows::Forms::Button());
            this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
            this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
            this->timing_panel = (gcnew System::Windows::Forms::Panel());
            this->twoH_timing = (gcnew System::Windows::Forms::Panel());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->listBox2 = (gcnew System::Windows::Forms::ListBox());
            this->threeH_panel = (gcnew System::Windows::Forms::Panel());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->spiderman_timing1 = (gcnew System::Windows::Forms::Button());
            this->scream_timing = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->encanto_timing = (gcnew System::Windows::Forms::Button());
            this->rednotices_timing = (gcnew System::Windows::Forms::Button());
            this->batman_timing = (gcnew System::Windows::Forms::Button());
            this->bookingpanel = (gcnew System::Windows::Forms::Panel());
            this->encantouserbooking = (gcnew System::Windows::Forms::Panel());
            this->button56 = (gcnew System::Windows::Forms::Button());
            this->button44 = (gcnew System::Windows::Forms::Button());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->button45 = (gcnew System::Windows::Forms::Button());
            this->button46 = (gcnew System::Windows::Forms::Button());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->button47 = (gcnew System::Windows::Forms::Button());
            this->button48 = (gcnew System::Windows::Forms::Button());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->button49 = (gcnew System::Windows::Forms::Button());
            this->button50 = (gcnew System::Windows::Forms::Button());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->encantoreservationbutton = (gcnew System::Windows::Forms::Button());
            this->encantocomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->totalprice5 = (gcnew System::Windows::Forms::Label());
            this->label75 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label76 = (gcnew System::Windows::Forms::Label());
            this->reduserbooking = (gcnew System::Windows::Forms::Panel());
            this->button55 = (gcnew System::Windows::Forms::Button());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->button38 = (gcnew System::Windows::Forms::Button());
            this->button39 = (gcnew System::Windows::Forms::Button());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->button40 = (gcnew System::Windows::Forms::Button());
            this->button41 = (gcnew System::Windows::Forms::Button());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->button42 = (gcnew System::Windows::Forms::Button());
            this->button43 = (gcnew System::Windows::Forms::Button());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->redreservationbutton = (gcnew System::Windows::Forms::Button());
            this->redcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->totalprice4 = (gcnew System::Windows::Forms::Label());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->screamuserbooking = (gcnew System::Windows::Forms::Panel());
            this->button53 = (gcnew System::Windows::Forms::Button());
            this->screamreservationbutton = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->button36 = (gcnew System::Windows::Forms::Button());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->screamcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->totalprice3 = (gcnew System::Windows::Forms::Label());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->spideruserbooking = (gcnew System::Windows::Forms::Panel());
            this->button57 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->spiderreservationbutton = (gcnew System::Windows::Forms::Button());
            this->spidercomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->totalprice2 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->listBox3 = (gcnew System::Windows::Forms::ListBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->listBox4 = (gcnew System::Windows::Forms::ListBox());
            this->spiderbooking = (gcnew System::Windows::Forms::Button());
            this->screambooking = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->encantobooking = (gcnew System::Windows::Forms::Button());
            this->redbooking = (gcnew System::Windows::Forms::Button());
            this->batbooking = (gcnew System::Windows::Forms::Button());
            this->batuserbooking = (gcnew System::Windows::Forms::Panel());
            this->button54 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->remender_ticket_panel = (gcnew System::Windows::Forms::Panel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->party_is_full_panel = (gcnew System::Windows::Forms::Panel());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->reservationcompletepanel = (gcnew System::Windows::Forms::Panel());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->batreservationbutton = (gcnew System::Windows::Forms::Button());
            this->batcombobox = (gcnew System::Windows::Forms::ComboBox());
            this->Totalprice = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->suggestionpanel = (gcnew System::Windows::Forms::Panel());
            this->button51 = (gcnew System::Windows::Forms::Button());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->aboutuspanel = (gcnew System::Windows::Forms::Panel());
            this->button52 = (gcnew System::Windows::Forms::Button());
            this->aboutuslabel = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->redinfo->SuspendLayout();
            this->batinfo->SuspendLayout();
            this->encantoinfo->SuspendLayout();
            this->spidermaninfo->SuspendLayout();
            this->screaminfo->SuspendLayout();
            this->timing_panel->SuspendLayout();
            this->twoH_timing->SuspendLayout();
            this->threeH_panel->SuspendLayout();
            this->bookingpanel->SuspendLayout();
            this->encantouserbooking->SuspendLayout();
            this->panel14->SuspendLayout();
            this->panel15->SuspendLayout();
            this->panel16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
            this->reduserbooking->SuspendLayout();
            this->panel11->SuspendLayout();
            this->panel12->SuspendLayout();
            this->panel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
            this->screamuserbooking->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel9->SuspendLayout();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
            this->spideruserbooking->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->batuserbooking->SuspendLayout();
            this->remender_ticket_panel->SuspendLayout();
            this->party_is_full_panel->SuspendLayout();
            this->reservationcompletepanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->suggestionpanel->SuspendLayout();
            this->aboutuspanel->SuspendLayout();
            this->SuspendLayout();
            // 
            // title
            // 
            this->title->BackColor = System::Drawing::Color::Black;
            this->title->Dock = System::Windows::Forms::DockStyle::Top;
            this->title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title->ForeColor = System::Drawing::Color::White;
            this->title->Location = System::Drawing::Point(0, 0);
            this->title->Name = L"title";
            this->title->Size = System::Drawing::Size(1531, 45);
            this->title->TabIndex = 0;
            this->title->Text = L"Cinema Reservation System";
            this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->title->Click += gcnew System::EventHandler(this, &MyForm::title_Click);
            // 
            // Movies
            // 
            this->Movies->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->Movies->BackColor = System::Drawing::Color::White;
            this->Movies->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Movies->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Movies->Location = System::Drawing::Point(352, 149);
            this->Movies->Name = L"Movies";
            this->Movies->Size = System::Drawing::Size(883, 75);
            this->Movies->TabIndex = 1;
            this->Movies->Text = L"Show All Movies";
            this->Movies->UseVisualStyleBackColor = false;
            this->Movies->Click += gcnew System::EventHandler(this, &MyForm::Movies_Click);
            // 
            // Timing
            // 
            this->Timing->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->Timing->BackColor = System::Drawing::Color::White;
            this->Timing->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Timing->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Timing->Location = System::Drawing::Point(352, 247);
            this->Timing->Name = L"Timing";
            this->Timing->Size = System::Drawing::Size(883, 75);
            this->Timing->TabIndex = 2;
            this->Timing->Text = L"Timing";
            this->Timing->UseVisualStyleBackColor = false;
            this->Timing->Click += gcnew System::EventHandler(this, &MyForm::Timing_Click);
            // 
            // Booking
            // 
            this->Booking->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->Booking->BackColor = System::Drawing::Color::White;
            this->Booking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Booking->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Booking->Location = System::Drawing::Point(352, 353);
            this->Booking->Name = L"Booking";
            this->Booking->Size = System::Drawing::Size(883, 75);
            this->Booking->TabIndex = 3;
            this->Booking->Text = L"Book A Ticket";
            this->Booking->UseVisualStyleBackColor = false;
            this->Booking->Click += gcnew System::EventHandler(this, &MyForm::Booking_Click);
            // 
            // About
            // 
            this->About->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->About->BackColor = System::Drawing::Color::White;
            this->About->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->About->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->About->Location = System::Drawing::Point(352, 449);
            this->About->Name = L"About";
            this->About->Size = System::Drawing::Size(883, 75);
            this->About->TabIndex = 4;
            this->About->Text = L"About Us";
            this->About->UseVisualStyleBackColor = false;
            this->About->Click += gcnew System::EventHandler(this, &MyForm::About_Click);
            // 
            // Exit
            // 
            this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->Exit->BackColor = System::Drawing::Color::White;
            this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Exit->Location = System::Drawing::Point(352, 547);
            this->Exit->Name = L"Exit";
            this->Exit->Size = System::Drawing::Size(883, 75);
            this->Exit->TabIndex = 5;
            this->Exit->Text = L"Exit";
            this->Exit->UseVisualStyleBackColor = false;
            this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
            // 
            // panel1
            // 
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->Controls->Add(this->redinfo);
            this->panel1->Controls->Add(this->batinfo);
            this->panel1->Controls->Add(this->encantoinfo);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->spidermaninfo);
            this->panel1->Controls->Add(this->batman);
            this->panel1->Controls->Add(this->rednotice);
            this->panel1->Controls->Add(this->screaminfo);
            this->panel1->Controls->Add(this->scream);
            this->panel1->Controls->Add(this->encanto);
            this->panel1->Controls->Add(this->spiderman);
            this->panel1->Controls->Add(this->back1);
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(0, 0);
            this->panel1->TabIndex = 6;
            // 
            // redinfo
            // 
            this->redinfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->redinfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->redinfo->Controls->Add(this->button7);
            this->redinfo->Controls->Add(this->button3);
            this->redinfo->Controls->Add(this->redrating);
            this->redinfo->Controls->Add(this->redduration);
            this->redinfo->Controls->Add(this->redhall);
            this->redinfo->Controls->Add(this->redactor3);
            this->redinfo->Controls->Add(this->redactor2);
            this->redinfo->Controls->Add(this->redactor1);
            this->redinfo->Controls->Add(this->reddirector);
            this->redinfo->Controls->Add(this->redname);
            this->redinfo->Controls->Add(this->label35);
            this->redinfo->Controls->Add(this->label36);
            this->redinfo->Controls->Add(this->label37);
            this->redinfo->Controls->Add(this->label38);
            this->redinfo->Controls->Add(this->label39);
            this->redinfo->Controls->Add(this->label40);
            this->redinfo->Controls->Add(this->label41);
            this->redinfo->Controls->Add(this->label42);
            this->redinfo->Location = System::Drawing::Point(1288, 272);
            this->redinfo->Name = L"redinfo";
            this->redinfo->Size = System::Drawing::Size(0, 0);
            this->redinfo->TabIndex = 10;
            // 
            // button7
            // 
            this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button7->AutoSize = true;
            this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(-134, -75);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(101, 48);
            this->button7->TabIndex = 17;
            this->button7->Text = L"Back";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // button3
            // 
            this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button3->AutoSize = true;
            this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(-1851, -362);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(101, 48);
            this->button3->TabIndex = 16;
            this->button3->Text = L"Back";
            this->button3->UseVisualStyleBackColor = true;
            // 
            // redrating
            // 
            this->redrating->AutoSize = true;
            this->redrating->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redrating->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redrating->Location = System::Drawing::Point(343, 493);
            this->redrating->Name = L"redrating";
            this->redrating->Size = System::Drawing::Size(116, 37);
            this->redrating->TabIndex = 15;
            this->redrating->Text = L"label11";
            // 
            // redduration
            // 
            this->redduration->AutoSize = true;
            this->redduration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redduration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redduration->Location = System::Drawing::Point(343, 436);
            this->redduration->Name = L"redduration";
            this->redduration->Size = System::Drawing::Size(116, 37);
            this->redduration->TabIndex = 14;
            this->redduration->Text = L"label11";
            // 
            // redhall
            // 
            this->redhall->AutoSize = true;
            this->redhall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redhall->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redhall->Location = System::Drawing::Point(343, 376);
            this->redhall->Name = L"redhall";
            this->redhall->Size = System::Drawing::Size(116, 37);
            this->redhall->TabIndex = 13;
            this->redhall->Text = L"label11";
            // 
            // redactor3
            // 
            this->redactor3->AutoSize = true;
            this->redactor3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redactor3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redactor3->Location = System::Drawing::Point(343, 321);
            this->redactor3->Name = L"redactor3";
            this->redactor3->Size = System::Drawing::Size(116, 37);
            this->redactor3->TabIndex = 12;
            this->redactor3->Text = L"label11";
            // 
            // redactor2
            // 
            this->redactor2->AutoSize = true;
            this->redactor2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redactor2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redactor2->Location = System::Drawing::Point(343, 262);
            this->redactor2->Name = L"redactor2";
            this->redactor2->Size = System::Drawing::Size(116, 37);
            this->redactor2->TabIndex = 11;
            this->redactor2->Text = L"label11";
            // 
            // redactor1
            // 
            this->redactor1->AutoSize = true;
            this->redactor1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redactor1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redactor1->Location = System::Drawing::Point(343, 203);
            this->redactor1->Name = L"redactor1";
            this->redactor1->Size = System::Drawing::Size(116, 37);
            this->redactor1->TabIndex = 10;
            this->redactor1->Text = L"label11";
            // 
            // reddirector
            // 
            this->reddirector->AutoSize = true;
            this->reddirector->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->reddirector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->reddirector->Location = System::Drawing::Point(343, 143);
            this->reddirector->Name = L"reddirector";
            this->reddirector->Size = System::Drawing::Size(116, 37);
            this->reddirector->TabIndex = 9;
            this->reddirector->Text = L"label11";
            // 
            // redname
            // 
            this->redname->AutoSize = true;
            this->redname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redname->Location = System::Drawing::Point(343, 82);
            this->redname->Name = L"redname";
            this->redname->Size = System::Drawing::Size(116, 37);
            this->redname->TabIndex = 8;
            this->redname->Text = L"label11";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(58, 493);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(238, 37);
            this->label35->TabIndex = 7;
            this->label35->Text = L"IMDB Rating : ";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(58, 436);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(172, 37);
            this->label36->TabIndex = 6;
            this->label36->Text = L"Duration : ";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(58, 380);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(104, 37);
            this->label37->TabIndex = 5;
            this->label37->Text = L"Hall : ";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(58, 321);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(141, 37);
            this->label38->TabIndex = 4;
            this->label38->Text = L"Actor 3 :";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(58, 262);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(141, 37);
            this->label39->TabIndex = 3;
            this->label39->Text = L"Actor 2 :";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(58, 203);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(141, 37);
            this->label40->TabIndex = 2;
            this->label40->Text = L"Actor 1 :";
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(58, 143);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(163, 37);
            this->label41->TabIndex = 1;
            this->label41->Text = L"Director : ";
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(58, 82);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(126, 37);
            this->label42->TabIndex = 0;
            this->label42->Text = L"Name : ";
            // 
            // batinfo
            // 
            this->batinfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->batinfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->batinfo->Controls->Add(this->button1);
            this->batinfo->Controls->Add(this->batrating);
            this->batinfo->Controls->Add(this->batduration);
            this->batinfo->Controls->Add(this->bathall);
            this->batinfo->Controls->Add(this->batactor3);
            this->batinfo->Controls->Add(this->batactor2);
            this->batinfo->Controls->Add(this->batactor1);
            this->batinfo->Controls->Add(this->batdirector);
            this->batinfo->Controls->Add(this->batname);
            this->batinfo->Controls->Add(this->label19);
            this->batinfo->Controls->Add(this->label20);
            this->batinfo->Controls->Add(this->label21);
            this->batinfo->Controls->Add(this->label22);
            this->batinfo->Controls->Add(this->label23);
            this->batinfo->Controls->Add(this->label24);
            this->batinfo->Controls->Add(this->label25);
            this->batinfo->Controls->Add(this->label26);
            this->batinfo->Location = System::Drawing::Point(1284, 82);
            this->batinfo->Name = L"batinfo";
            this->batinfo->Size = System::Drawing::Size(0, 0);
            this->batinfo->TabIndex = 8;
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button1->AutoSize = true;
            this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(-155, -79);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(101, 48);
            this->button1->TabIndex = 16;
            this->button1->Text = L"Back";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // batrating
            // 
            this->batrating->AutoSize = true;
            this->batrating->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batrating->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batrating->Location = System::Drawing::Point(343, 493);
            this->batrating->Name = L"batrating";
            this->batrating->Size = System::Drawing::Size(116, 37);
            this->batrating->TabIndex = 15;
            this->batrating->Text = L"label11";
            // 
            // batduration
            // 
            this->batduration->AutoSize = true;
            this->batduration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batduration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batduration->Location = System::Drawing::Point(343, 436);
            this->batduration->Name = L"batduration";
            this->batduration->Size = System::Drawing::Size(116, 37);
            this->batduration->TabIndex = 14;
            this->batduration->Text = L"label11";
            // 
            // bathall
            // 
            this->bathall->AutoSize = true;
            this->bathall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bathall->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bathall->Location = System::Drawing::Point(343, 376);
            this->bathall->Name = L"bathall";
            this->bathall->Size = System::Drawing::Size(116, 37);
            this->bathall->TabIndex = 13;
            this->bathall->Text = L"label11";
            // 
            // batactor3
            // 
            this->batactor3->AutoSize = true;
            this->batactor3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batactor3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batactor3->Location = System::Drawing::Point(343, 321);
            this->batactor3->Name = L"batactor3";
            this->batactor3->Size = System::Drawing::Size(116, 37);
            this->batactor3->TabIndex = 12;
            this->batactor3->Text = L"label11";
            // 
            // batactor2
            // 
            this->batactor2->AutoSize = true;
            this->batactor2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batactor2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batactor2->Location = System::Drawing::Point(343, 262);
            this->batactor2->Name = L"batactor2";
            this->batactor2->Size = System::Drawing::Size(116, 37);
            this->batactor2->TabIndex = 11;
            this->batactor2->Text = L"label11";
            // 
            // batactor1
            // 
            this->batactor1->AutoSize = true;
            this->batactor1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batactor1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batactor1->Location = System::Drawing::Point(343, 203);
            this->batactor1->Name = L"batactor1";
            this->batactor1->Size = System::Drawing::Size(116, 37);
            this->batactor1->TabIndex = 10;
            this->batactor1->Text = L"label11";
            // 
            // batdirector
            // 
            this->batdirector->AutoSize = true;
            this->batdirector->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batdirector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batdirector->Location = System::Drawing::Point(343, 143);
            this->batdirector->Name = L"batdirector";
            this->batdirector->Size = System::Drawing::Size(116, 37);
            this->batdirector->TabIndex = 9;
            this->batdirector->Text = L"label11";
            // 
            // batname
            // 
            this->batname->AutoSize = true;
            this->batname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batname->Location = System::Drawing::Point(343, 82);
            this->batname->Name = L"batname";
            this->batname->Size = System::Drawing::Size(116, 37);
            this->batname->TabIndex = 8;
            this->batname->Text = L"label11";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(58, 493);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(238, 37);
            this->label19->TabIndex = 7;
            this->label19->Text = L"IMDB Rating : ";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(58, 436);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(172, 37);
            this->label20->TabIndex = 6;
            this->label20->Text = L"Duration : ";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(58, 380);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(104, 37);
            this->label21->TabIndex = 5;
            this->label21->Text = L"Hall : ";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(58, 321);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(141, 37);
            this->label22->TabIndex = 4;
            this->label22->Text = L"Actor 3 :";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(58, 262);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(141, 37);
            this->label23->TabIndex = 3;
            this->label23->Text = L"Actor 2 :";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(58, 203);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(141, 37);
            this->label24->TabIndex = 2;
            this->label24->Text = L"Actor 1 :";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(58, 143);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(163, 37);
            this->label25->TabIndex = 1;
            this->label25->Text = L"Director : ";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(58, 82);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(126, 37);
            this->label26->TabIndex = 0;
            this->label26->Text = L"Name : ";
            // 
            // encantoinfo
            // 
            this->encantoinfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->encantoinfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->encantoinfo->Controls->Add(this->button6);
            this->encantoinfo->Controls->Add(this->button4);
            this->encantoinfo->Controls->Add(this->encantorating);
            this->encantoinfo->Controls->Add(this->encantoduration);
            this->encantoinfo->Controls->Add(this->encantohall);
            this->encantoinfo->Controls->Add(this->encantoactor3);
            this->encantoinfo->Controls->Add(this->encantoactor2);
            this->encantoinfo->Controls->Add(this->encantoactor1);
            this->encantoinfo->Controls->Add(this->encantodirector);
            this->encantoinfo->Controls->Add(this->encantoname);
            this->encantoinfo->Controls->Add(this->label43);
            this->encantoinfo->Controls->Add(this->label44);
            this->encantoinfo->Controls->Add(this->label45);
            this->encantoinfo->Controls->Add(this->label46);
            this->encantoinfo->Controls->Add(this->label47);
            this->encantoinfo->Controls->Add(this->label48);
            this->encantoinfo->Controls->Add(this->label49);
            this->encantoinfo->Controls->Add(this->label50);
            this->encantoinfo->Location = System::Drawing::Point(1286, 216);
            this->encantoinfo->Name = L"encantoinfo";
            this->encantoinfo->Size = System::Drawing::Size(0, 0);
            this->encantoinfo->TabIndex = 11;
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button6->AutoSize = true;
            this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(-123, -71);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(101, 48);
            this->button6->TabIndex = 17;
            this->button6->Text = L"Back";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // button4
            // 
            this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button4->AutoSize = true;
            this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(-1901, -412);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(101, 48);
            this->button4->TabIndex = 16;
            this->button4->Text = L"Back";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // encantorating
            // 
            this->encantorating->AutoSize = true;
            this->encantorating->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantorating->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantorating->Location = System::Drawing::Point(343, 493);
            this->encantorating->Name = L"encantorating";
            this->encantorating->Size = System::Drawing::Size(116, 37);
            this->encantorating->TabIndex = 15;
            this->encantorating->Text = L"label11";
            // 
            // encantoduration
            // 
            this->encantoduration->AutoSize = true;
            this->encantoduration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantoduration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantoduration->Location = System::Drawing::Point(343, 436);
            this->encantoduration->Name = L"encantoduration";
            this->encantoduration->Size = System::Drawing::Size(116, 37);
            this->encantoduration->TabIndex = 14;
            this->encantoduration->Text = L"label11";
            // 
            // encantohall
            // 
            this->encantohall->AutoSize = true;
            this->encantohall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantohall->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantohall->Location = System::Drawing::Point(343, 376);
            this->encantohall->Name = L"encantohall";
            this->encantohall->Size = System::Drawing::Size(116, 37);
            this->encantohall->TabIndex = 13;
            this->encantohall->Text = L"label11";
            // 
            // encantoactor3
            // 
            this->encantoactor3->AutoSize = true;
            this->encantoactor3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantoactor3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantoactor3->Location = System::Drawing::Point(343, 321);
            this->encantoactor3->Name = L"encantoactor3";
            this->encantoactor3->Size = System::Drawing::Size(116, 37);
            this->encantoactor3->TabIndex = 12;
            this->encantoactor3->Text = L"label11";
            // 
            // encantoactor2
            // 
            this->encantoactor2->AutoSize = true;
            this->encantoactor2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantoactor2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantoactor2->Location = System::Drawing::Point(343, 262);
            this->encantoactor2->Name = L"encantoactor2";
            this->encantoactor2->Size = System::Drawing::Size(116, 37);
            this->encantoactor2->TabIndex = 11;
            this->encantoactor2->Text = L"label11";
            // 
            // encantoactor1
            // 
            this->encantoactor1->AutoSize = true;
            this->encantoactor1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantoactor1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantoactor1->Location = System::Drawing::Point(343, 203);
            this->encantoactor1->Name = L"encantoactor1";
            this->encantoactor1->Size = System::Drawing::Size(116, 37);
            this->encantoactor1->TabIndex = 10;
            this->encantoactor1->Text = L"label11";
            // 
            // encantodirector
            // 
            this->encantodirector->AutoSize = true;
            this->encantodirector->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantodirector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantodirector->Location = System::Drawing::Point(343, 143);
            this->encantodirector->Name = L"encantodirector";
            this->encantodirector->Size = System::Drawing::Size(116, 37);
            this->encantodirector->TabIndex = 9;
            this->encantodirector->Text = L"label11";
            // 
            // encantoname
            // 
            this->encantoname->AutoSize = true;
            this->encantoname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantoname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantoname->Location = System::Drawing::Point(343, 82);
            this->encantoname->Name = L"encantoname";
            this->encantoname->Size = System::Drawing::Size(116, 37);
            this->encantoname->TabIndex = 8;
            this->encantoname->Text = L"label11";
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(58, 493);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(238, 37);
            this->label43->TabIndex = 7;
            this->label43->Text = L"IMDB Rating : ";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(58, 436);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(172, 37);
            this->label44->TabIndex = 6;
            this->label44->Text = L"Duration : ";
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(58, 380);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(104, 37);
            this->label45->TabIndex = 5;
            this->label45->Text = L"Hall : ";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(58, 321);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(141, 37);
            this->label46->TabIndex = 4;
            this->label46->Text = L"Actor 3 :";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(58, 262);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(141, 37);
            this->label47->TabIndex = 3;
            this->label47->Text = L"Actor 2 :";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(58, 203);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(141, 37);
            this->label48->TabIndex = 2;
            this->label48->Text = L"Actor 1 :";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(58, 143);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(163, 37);
            this->label49->TabIndex = 1;
            this->label49->Text = L"Director : ";
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(58, 82);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(126, 37);
            this->label50->TabIndex = 0;
            this->label50->Text = L"Name : ";
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(16, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(0, 79);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Click Image For More Info...";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // spidermaninfo
            // 
            this->spidermaninfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->spidermaninfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->spidermaninfo->Controls->Add(this->button8);
            this->spidermaninfo->Controls->Add(this->back2);
            this->spidermaninfo->Controls->Add(this->spidermanrating);
            this->spidermaninfo->Controls->Add(this->spidermanduration);
            this->spidermaninfo->Controls->Add(this->spidermanhall);
            this->spidermaninfo->Controls->Add(this->spidermanactor3);
            this->spidermaninfo->Controls->Add(this->spidermanactor2);
            this->spidermaninfo->Controls->Add(this->spidermanactor1);
            this->spidermaninfo->Controls->Add(this->spidermandirector);
            this->spidermaninfo->Controls->Add(this->spidermanname);
            this->spidermaninfo->Controls->Add(this->label10);
            this->spidermaninfo->Controls->Add(this->label9);
            this->spidermaninfo->Controls->Add(this->label8);
            this->spidermaninfo->Controls->Add(this->label7);
            this->spidermaninfo->Controls->Add(this->label6);
            this->spidermaninfo->Controls->Add(this->label5);
            this->spidermaninfo->Controls->Add(this->label4);
            this->spidermaninfo->Controls->Add(this->label3);
            this->spidermaninfo->Location = System::Drawing::Point(1286, 358);
            this->spidermaninfo->Name = L"spidermaninfo";
            this->spidermaninfo->Size = System::Drawing::Size(0, 0);
            this->spidermaninfo->TabIndex = 7;
            // 
            // button8
            // 
            this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button8->AutoSize = true;
            this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(-151, -80);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(101, 48);
            this->button8->TabIndex = 17;
            this->button8->Text = L"Back";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // back2
            // 
            this->back2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->back2->AutoSize = true;
            this->back2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->back2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->back2->Location = System::Drawing::Point(-1901, -462);
            this->back2->Name = L"back2";
            this->back2->Size = System::Drawing::Size(101, 48);
            this->back2->TabIndex = 16;
            this->back2->Text = L"Back";
            this->back2->UseVisualStyleBackColor = true;
            // 
            // spidermanrating
            // 
            this->spidermanrating->AutoSize = true;
            this->spidermanrating->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermanrating->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermanrating->Location = System::Drawing::Point(343, 493);
            this->spidermanrating->Name = L"spidermanrating";
            this->spidermanrating->Size = System::Drawing::Size(116, 37);
            this->spidermanrating->TabIndex = 15;
            this->spidermanrating->Text = L"label11";
            // 
            // spidermanduration
            // 
            this->spidermanduration->AutoSize = true;
            this->spidermanduration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermanduration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermanduration->Location = System::Drawing::Point(343, 436);
            this->spidermanduration->Name = L"spidermanduration";
            this->spidermanduration->Size = System::Drawing::Size(116, 37);
            this->spidermanduration->TabIndex = 14;
            this->spidermanduration->Text = L"label11";
            // 
            // spidermanhall
            // 
            this->spidermanhall->AutoSize = true;
            this->spidermanhall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermanhall->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermanhall->Location = System::Drawing::Point(343, 376);
            this->spidermanhall->Name = L"spidermanhall";
            this->spidermanhall->Size = System::Drawing::Size(116, 37);
            this->spidermanhall->TabIndex = 13;
            this->spidermanhall->Text = L"label11";
            // 
            // spidermanactor3
            // 
            this->spidermanactor3->AutoSize = true;
            this->spidermanactor3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermanactor3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermanactor3->Location = System::Drawing::Point(343, 321);
            this->spidermanactor3->Name = L"spidermanactor3";
            this->spidermanactor3->Size = System::Drawing::Size(116, 37);
            this->spidermanactor3->TabIndex = 12;
            this->spidermanactor3->Text = L"label11";
            // 
            // spidermanactor2
            // 
            this->spidermanactor2->AutoSize = true;
            this->spidermanactor2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermanactor2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermanactor2->Location = System::Drawing::Point(343, 262);
            this->spidermanactor2->Name = L"spidermanactor2";
            this->spidermanactor2->Size = System::Drawing::Size(116, 37);
            this->spidermanactor2->TabIndex = 11;
            this->spidermanactor2->Text = L"label11";
            // 
            // spidermanactor1
            // 
            this->spidermanactor1->AutoSize = true;
            this->spidermanactor1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermanactor1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermanactor1->Location = System::Drawing::Point(343, 203);
            this->spidermanactor1->Name = L"spidermanactor1";
            this->spidermanactor1->Size = System::Drawing::Size(116, 37);
            this->spidermanactor1->TabIndex = 10;
            this->spidermanactor1->Text = L"label11";
            // 
            // spidermandirector
            // 
            this->spidermandirector->AutoSize = true;
            this->spidermandirector->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermandirector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermandirector->Location = System::Drawing::Point(343, 143);
            this->spidermandirector->Name = L"spidermandirector";
            this->spidermandirector->Size = System::Drawing::Size(116, 37);
            this->spidermandirector->TabIndex = 9;
            this->spidermandirector->Text = L"label11";
            // 
            // spidermanname
            // 
            this->spidermanname->AutoSize = true;
            this->spidermanname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidermanname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidermanname->Location = System::Drawing::Point(343, 82);
            this->spidermanname->Name = L"spidermanname";
            this->spidermanname->Size = System::Drawing::Size(116, 37);
            this->spidermanname->TabIndex = 8;
            this->spidermanname->Text = L"label11";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(58, 493);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(238, 37);
            this->label10->TabIndex = 7;
            this->label10->Text = L"IMDB Rating : ";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(58, 436);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(172, 37);
            this->label9->TabIndex = 6;
            this->label9->Text = L"Duration : ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(58, 380);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(104, 37);
            this->label8->TabIndex = 5;
            this->label8->Text = L"Hall : ";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(58, 321);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(141, 37);
            this->label7->TabIndex = 4;
            this->label7->Text = L"Actor 3 :";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(58, 262);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(141, 37);
            this->label6->TabIndex = 3;
            this->label6->Text = L"Actor 2 :";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(58, 203);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(141, 37);
            this->label5->TabIndex = 2;
            this->label5->Text = L"Actor 1 :";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(58, 143);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(163, 37);
            this->label4->TabIndex = 1;
            this->label4->Text = L"Director : ";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(58, 82);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(126, 37);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Name : ";
            // 
            // batman
            // 
            this->batman->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->batman->AutoSize = true;
            this->batman->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"batman.BackgroundImage")));
            this->batman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->batman->Location = System::Drawing::Point(-128, 82);
            this->batman->Name = L"batman";
            this->batman->Size = System::Drawing::Size(280, 250);
            this->batman->TabIndex = 5;
            this->batman->Text = L"button2";
            this->batman->UseVisualStyleBackColor = true;
            this->batman->Click += gcnew System::EventHandler(this, &MyForm::batman_Click);
            // 
            // rednotice
            // 
            this->rednotice->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->rednotice->AutoSize = true;
            this->rednotice->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rednotice.BackgroundImage")));
            this->rednotice->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->rednotice->Location = System::Drawing::Point(-349, 368);
            this->rednotice->Name = L"rednotice";
            this->rednotice->Size = System::Drawing::Size(280, 250);
            this->rednotice->TabIndex = 4;
            this->rednotice->UseVisualStyleBackColor = true;
            this->rednotice->Click += gcnew System::EventHandler(this, &MyForm::rednotice_Click);
            // 
            // screaminfo
            // 
            this->screaminfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->screaminfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->screaminfo->Controls->Add(this->button5);
            this->screaminfo->Controls->Add(this->button2);
            this->screaminfo->Controls->Add(this->screamrating);
            this->screaminfo->Controls->Add(this->screamduration);
            this->screaminfo->Controls->Add(this->screamhall);
            this->screaminfo->Controls->Add(this->screamactor3);
            this->screaminfo->Controls->Add(this->screamactor2);
            this->screaminfo->Controls->Add(this->screamactor1);
            this->screaminfo->Controls->Add(this->screamdirector);
            this->screaminfo->Controls->Add(this->screamname);
            this->screaminfo->Controls->Add(this->label27);
            this->screaminfo->Controls->Add(this->label28);
            this->screaminfo->Controls->Add(this->label29);
            this->screaminfo->Controls->Add(this->label30);
            this->screaminfo->Controls->Add(this->label31);
            this->screaminfo->Controls->Add(this->label32);
            this->screaminfo->Controls->Add(this->label33);
            this->screaminfo->Controls->Add(this->label34);
            this->screaminfo->Location = System::Drawing::Point(1284, 159);
            this->screaminfo->Name = L"screaminfo";
            this->screaminfo->Size = System::Drawing::Size(0, 0);
            this->screaminfo->TabIndex = 9;
            // 
            // button5
            // 
            this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button5->AutoSize = true;
            this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(-142, -73);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(101, 48);
            this->button5->TabIndex = 17;
            this->button5->Text = L"Back";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button2
            // 
            this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button2->AutoSize = true;
            this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(-1851, -362);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(101, 48);
            this->button2->TabIndex = 16;
            this->button2->Text = L"Back";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // screamrating
            // 
            this->screamrating->AutoSize = true;
            this->screamrating->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamrating->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamrating->Location = System::Drawing::Point(343, 493);
            this->screamrating->Name = L"screamrating";
            this->screamrating->Size = System::Drawing::Size(116, 37);
            this->screamrating->TabIndex = 15;
            this->screamrating->Text = L"label11";
            // 
            // screamduration
            // 
            this->screamduration->AutoSize = true;
            this->screamduration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamduration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamduration->Location = System::Drawing::Point(343, 436);
            this->screamduration->Name = L"screamduration";
            this->screamduration->Size = System::Drawing::Size(116, 37);
            this->screamduration->TabIndex = 14;
            this->screamduration->Text = L"label11";
            // 
            // screamhall
            // 
            this->screamhall->AutoSize = true;
            this->screamhall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamhall->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamhall->Location = System::Drawing::Point(343, 376);
            this->screamhall->Name = L"screamhall";
            this->screamhall->Size = System::Drawing::Size(116, 37);
            this->screamhall->TabIndex = 13;
            this->screamhall->Text = L"label11";
            // 
            // screamactor3
            // 
            this->screamactor3->AutoSize = true;
            this->screamactor3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamactor3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamactor3->Location = System::Drawing::Point(343, 321);
            this->screamactor3->Name = L"screamactor3";
            this->screamactor3->Size = System::Drawing::Size(116, 37);
            this->screamactor3->TabIndex = 12;
            this->screamactor3->Text = L"label11";
            // 
            // screamactor2
            // 
            this->screamactor2->AutoSize = true;
            this->screamactor2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamactor2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamactor2->Location = System::Drawing::Point(343, 262);
            this->screamactor2->Name = L"screamactor2";
            this->screamactor2->Size = System::Drawing::Size(116, 37);
            this->screamactor2->TabIndex = 11;
            this->screamactor2->Text = L"label11";
            // 
            // screamactor1
            // 
            this->screamactor1->AutoSize = true;
            this->screamactor1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamactor1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamactor1->Location = System::Drawing::Point(343, 203);
            this->screamactor1->Name = L"screamactor1";
            this->screamactor1->Size = System::Drawing::Size(116, 37);
            this->screamactor1->TabIndex = 10;
            this->screamactor1->Text = L"label11";
            // 
            // screamdirector
            // 
            this->screamdirector->AutoSize = true;
            this->screamdirector->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamdirector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamdirector->Location = System::Drawing::Point(343, 143);
            this->screamdirector->Name = L"screamdirector";
            this->screamdirector->Size = System::Drawing::Size(116, 37);
            this->screamdirector->TabIndex = 9;
            this->screamdirector->Text = L"label11";
            // 
            // screamname
            // 
            this->screamname->AutoSize = true;
            this->screamname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamname->Location = System::Drawing::Point(343, 82);
            this->screamname->Name = L"screamname";
            this->screamname->Size = System::Drawing::Size(116, 37);
            this->screamname->TabIndex = 8;
            this->screamname->Text = L"label11";
            this->screamname->Click += gcnew System::EventHandler(this, &MyForm::screamname_Click);
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(58, 493);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(238, 37);
            this->label27->TabIndex = 7;
            this->label27->Text = L"IMDB Rating : ";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(58, 436);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(172, 37);
            this->label28->TabIndex = 6;
            this->label28->Text = L"Duration : ";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(58, 380);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(104, 37);
            this->label29->TabIndex = 5;
            this->label29->Text = L"Hall : ";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(58, 321);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(141, 37);
            this->label30->TabIndex = 4;
            this->label30->Text = L"Actor 3 :";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(58, 262);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(141, 37);
            this->label31->TabIndex = 3;
            this->label31->Text = L"Actor 2 :";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(58, 203);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(141, 37);
            this->label32->TabIndex = 2;
            this->label32->Text = L"Actor 1 :";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(58, 143);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(163, 37);
            this->label33->TabIndex = 1;
            this->label33->Text = L"Director : ";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(58, 82);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(126, 37);
            this->label34->TabIndex = 0;
            this->label34->Text = L"Name : ";
            // 
            // scream
            // 
            this->scream->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->scream->AutoSize = true;
            this->scream->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"scream.BackgroundImage")));
            this->scream->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->scream->Location = System::Drawing::Point(-439, 83);
            this->scream->Name = L"scream";
            this->scream->Size = System::Drawing::Size(280, 250);
            this->scream->TabIndex = 3;
            this->scream->UseVisualStyleBackColor = true;
            this->scream->Click += gcnew System::EventHandler(this, &MyForm::scream_Click);
            // 
            // encanto
            // 
            this->encanto->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->encanto->AutoSize = true;
            this->encanto->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"encanto.BackgroundImage")));
            this->encanto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->encanto->Location = System::Drawing::Point(36, 368);
            this->encanto->Name = L"encanto";
            this->encanto->Size = System::Drawing::Size(280, 250);
            this->encanto->TabIndex = 2;
            this->encanto->UseVisualStyleBackColor = true;
            this->encanto->Click += gcnew System::EventHandler(this, &MyForm::encanto_Click);
            // 
            // spiderman
            // 
            this->spiderman->AutoSize = true;
            this->spiderman->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spiderman.BackgroundImage")));
            this->spiderman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->spiderman->Location = System::Drawing::Point(167, 82);
            this->spiderman->Name = L"spiderman";
            this->spiderman->Size = System::Drawing::Size(280, 250);
            this->spiderman->TabIndex = 1;
            this->spiderman->UseVisualStyleBackColor = true;
            this->spiderman->Click += gcnew System::EventHandler(this, &MyForm::spiderman_Click);
            // 
            // back1
            // 
            this->back1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->back1->AutoSize = true;
            this->back1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->back1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->back1->Location = System::Drawing::Point(-204, -132);
            this->back1->Name = L"back1";
            this->back1->Size = System::Drawing::Size(101, 48);
            this->back1->TabIndex = 0;
            this->back1->Text = L"Back";
            this->back1->UseVisualStyleBackColor = true;
            this->back1->Click += gcnew System::EventHandler(this, &MyForm::back1_Click);
            // 
            // imageList1
            // 
            this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
            this->imageList1->ImageSize = System::Drawing::Size(16, 16);
            this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
            // 
            // imageList2
            // 
            this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
            this->imageList2->ImageSize = System::Drawing::Size(16, 16);
            this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
            // 
            // timing_panel
            // 
            this->timing_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->timing_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->timing_panel->Controls->Add(this->twoH_timing);
            this->timing_panel->Controls->Add(this->threeH_panel);
            this->timing_panel->Controls->Add(this->spiderman_timing1);
            this->timing_panel->Controls->Add(this->scream_timing);
            this->timing_panel->Controls->Add(this->button9);
            this->timing_panel->Controls->Add(this->encanto_timing);
            this->timing_panel->Controls->Add(this->rednotices_timing);
            this->timing_panel->Controls->Add(this->batman_timing);
            this->timing_panel->Location = System::Drawing::Point(1, 32);
            this->timing_panel->Name = L"timing_panel";
            this->timing_panel->Size = System::Drawing::Size(0, 0);
            this->timing_panel->TabIndex = 7;
            // 
            // twoH_timing
            // 
            this->twoH_timing->Controls->Add(this->button11);
            this->twoH_timing->Controls->Add(this->listBox2);
            this->twoH_timing->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->twoH_timing->Location = System::Drawing::Point(3, 7);
            this->twoH_timing->Name = L"twoH_timing";
            this->twoH_timing->Size = System::Drawing::Size(0, 0);
            this->twoH_timing->TabIndex = 8;
            this->twoH_timing->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // button11
            // 
            this->button11->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(0, -74);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(0, 74);
            this->button11->TabIndex = 1;
            this->button11->Text = L"Back";
            this->button11->UseVisualStyleBackColor = true;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
            // 
            // listBox2
            // 
            this->listBox2->BackColor = System::Drawing::Color::Black;
            this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->listBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->listBox2->FormattingEnabled = true;
            this->listBox2->ItemHeight = 42;
            this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
                L" ", L"", L"  ", L"                                                                  1.From 10:00AM "
                    L" To  12:00PM",
                    L"", L"\t\t\t             2.From 12:30PM  To  2:30PM", L"", L"\t\t\t             3.From 3:00PM  To  5:00PM", L"", L"\t\t\t             4.From 5:30PM  To  7:30PM",
                    L"", L"\t\t\t             5.From 8:00PM  To  10:00PM", L"", L"\t\t\t             6.From 10:30PM  To  12:30AM", L"", L"\t\t                          "
            });
            this->listBox2->Location = System::Drawing::Point(0, 0);
            this->listBox2->Name = L"listBox2";
            this->listBox2->Size = System::Drawing::Size(0, 0);
            this->listBox2->TabIndex = 0;
            this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
            // 
            // threeH_panel
            // 
            this->threeH_panel->Controls->Add(this->button10);
            this->threeH_panel->Controls->Add(this->listBox1);
            this->threeH_panel->Location = System::Drawing::Point(11, 11);
            this->threeH_panel->Name = L"threeH_panel";
            this->threeH_panel->Size = System::Drawing::Size(0, 0);
            this->threeH_panel->TabIndex = 7;
            // 
            // button10
            // 
            this->button10->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(0, -74);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(0, 74);
            this->button10->TabIndex = 1;
            this->button10->Text = L"Back";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // listBox1
            // 
            this->listBox1->BackColor = System::Drawing::Color::Black;
            this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->listBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ItemHeight = 45;
            this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
                L"", L"", L"", L"", L"", L"\t\t\t          1.From 10:00AM  To  1:00PM",
                    L"", L"\t\t\t          2.From 1:30PM  To  4:30PM", L"", L"\t\t\t          3.From 5:00PM  To  8:00PM", L"", L"\t\t\t          4.From 8:30PM  To  11:30PM",
                    L"", L"\t\t\t     "
            });
            this->listBox1->Location = System::Drawing::Point(0, 0);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(0, 0);
            this->listBox1->TabIndex = 0;
            this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
            // 
            // spiderman_timing1
            // 
            this->spiderman_timing1->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->spiderman_timing1->BackColor = System::Drawing::Color::White;
            this->spiderman_timing1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spiderman_timing1->ForeColor = System::Drawing::Color::Maroon;
            this->spiderman_timing1->Location = System::Drawing::Point(657, -297);
            this->spiderman_timing1->Name = L"spiderman_timing1";
            this->spiderman_timing1->Size = System::Drawing::Size(272, 75);
            this->spiderman_timing1->TabIndex = 6;
            this->spiderman_timing1->UseVisualStyleBackColor = false;
            this->spiderman_timing1->Click += gcnew System::EventHandler(this, &MyForm::spiderman_timing1_Click);
            // 
            // scream_timing
            // 
            this->scream_timing->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->scream_timing->BackColor = System::Drawing::Color::White;
            this->scream_timing->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->scream_timing->ForeColor = System::Drawing::Color::Maroon;
            this->scream_timing->Location = System::Drawing::Point(657, -89);
            this->scream_timing->Name = L"scream_timing";
            this->scream_timing->Size = System::Drawing::Size(272, 75);
            this->scream_timing->TabIndex = 5;
            this->scream_timing->UseVisualStyleBackColor = false;
            this->scream_timing->Click += gcnew System::EventHandler(this, &MyForm::scream_timing_Click);
            // 
            // button9
            // 
            this->button9->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->button9->BackColor = System::Drawing::Color::White;
            this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::Maroon;
            this->button9->Location = System::Drawing::Point(658, 212);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(272, 75);
            this->button9->TabIndex = 4;
            this->button9->Text = L"Back";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_2);
            // 
            // encanto_timing
            // 
            this->encanto_timing->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->encanto_timing->BackColor = System::Drawing::Color::White;
            this->encanto_timing->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encanto_timing->ForeColor = System::Drawing::Color::Maroon;
            this->encanto_timing->Location = System::Drawing::Point(658, 113);
            this->encanto_timing->Name = L"encanto_timing";
            this->encanto_timing->Size = System::Drawing::Size(272, 75);
            this->encanto_timing->TabIndex = 3;
            this->encanto_timing->UseVisualStyleBackColor = false;
            this->encanto_timing->Click += gcnew System::EventHandler(this, &MyForm::encanto_timing_Click);
            // 
            // rednotices_timing
            // 
            this->rednotices_timing->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->rednotices_timing->BackColor = System::Drawing::Color::White;
            this->rednotices_timing->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rednotices_timing->ForeColor = System::Drawing::Color::Maroon;
            this->rednotices_timing->Location = System::Drawing::Point(658, 10);
            this->rednotices_timing->Name = L"rednotices_timing";
            this->rednotices_timing->Size = System::Drawing::Size(272, 75);
            this->rednotices_timing->TabIndex = 2;
            this->rednotices_timing->UseVisualStyleBackColor = false;
            this->rednotices_timing->Click += gcnew System::EventHandler(this, &MyForm::rednotices_timing_Click);
            // 
            // batman_timing
            // 
            this->batman_timing->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->batman_timing->BackColor = System::Drawing::Color::White;
            this->batman_timing->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batman_timing->ForeColor = System::Drawing::Color::Maroon;
            this->batman_timing->Location = System::Drawing::Point(657, -194);
            this->batman_timing->Name = L"batman_timing";
            this->batman_timing->Size = System::Drawing::Size(272, 75);
            this->batman_timing->TabIndex = 1;
            this->batman_timing->UseVisualStyleBackColor = false;
            this->batman_timing->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
            // 
            // bookingpanel
            // 
            this->bookingpanel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->bookingpanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bookingpanel->Controls->Add(this->encantouserbooking);
            this->bookingpanel->Controls->Add(this->reduserbooking);
            this->bookingpanel->Controls->Add(this->screamuserbooking);
            this->bookingpanel->Controls->Add(this->spideruserbooking);
            this->bookingpanel->Controls->Add(this->panel3);
            this->bookingpanel->Controls->Add(this->panel4);
            this->bookingpanel->Controls->Add(this->spiderbooking);
            this->bookingpanel->Controls->Add(this->screambooking);
            this->bookingpanel->Controls->Add(this->button16);
            this->bookingpanel->Controls->Add(this->encantobooking);
            this->bookingpanel->Controls->Add(this->redbooking);
            this->bookingpanel->Controls->Add(this->batbooking);
            this->bookingpanel->Location = System::Drawing::Point(7, 3);
            this->bookingpanel->Name = L"bookingpanel";
            this->bookingpanel->Size = System::Drawing::Size(0, 0);
            this->bookingpanel->TabIndex = 8;
            // 
            // encantouserbooking
            // 
            this->encantouserbooking->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->encantouserbooking->Controls->Add(this->button56);
            this->encantouserbooking->Controls->Add(this->button44);
            this->encantouserbooking->Controls->Add(this->panel14);
            this->encantouserbooking->Controls->Add(this->panel15);
            this->encantouserbooking->Controls->Add(this->panel16);
            this->encantouserbooking->Controls->Add(this->encantoreservationbutton);
            this->encantouserbooking->Controls->Add(this->encantocomboBox);
            this->encantouserbooking->Controls->Add(this->totalprice5);
            this->encantouserbooking->Controls->Add(this->label75);
            this->encantouserbooking->Controls->Add(this->numericUpDown5);
            this->encantouserbooking->Controls->Add(this->label76);
            this->encantouserbooking->Location = System::Drawing::Point(16, 14);
            this->encantouserbooking->Name = L"encantouserbooking";
            this->encantouserbooking->Size = System::Drawing::Size(0, 0);
            this->encantouserbooking->TabIndex = 13;
            // 
            // button56
            // 
            this->button56->BackColor = System::Drawing::Color::White;
            this->button56->CausesValidation = false;
            this->button56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button56->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button56->Location = System::Drawing::Point(597, 592);
            this->button56->Name = L"button56";
            this->button56->Size = System::Drawing::Size(245, 55);
            this->button56->TabIndex = 14;
            this->button56->Text = L"Exit";
            this->button56->UseVisualStyleBackColor = false;
            this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
            // 
            // button44
            // 
            this->button44->BackColor = System::Drawing::Color::White;
            this->button44->CausesValidation = false;
            this->button44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button44->Location = System::Drawing::Point(597, 512);
            this->button44->Name = L"button44";
            this->button44->Size = System::Drawing::Size(245, 55);
            this->button44->TabIndex = 11;
            this->button44->Text = L"Back";
            this->button44->UseVisualStyleBackColor = false;
            this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
            // 
            // panel14
            // 
            this->panel14->Controls->Add(this->label68);
            this->panel14->Controls->Add(this->button45);
            this->panel14->Controls->Add(this->button46);
            this->panel14->Controls->Add(this->label71);
            this->panel14->Location = System::Drawing::Point(3, 3);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(0, 0);
            this->panel14->TabIndex = 10;
            // 
            // label68
            // 
            this->label68->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label68->AutoSize = true;
            this->label68->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label68->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label68->Location = System::Drawing::Point(343, -135);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(656, 45);
            this->label68->TabIndex = 3;
            this->label68->Text = L"Do you want to complete reservation\?";
            // 
            // button45
            // 
            this->button45->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button45->Location = System::Drawing::Point(0, -204);
            this->button45->Name = L"button45";
            this->button45->Size = System::Drawing::Size(0, 102);
            this->button45->TabIndex = 2;
            this->button45->Text = L"YES";
            this->button45->UseVisualStyleBackColor = true;
            // 
            // button46
            // 
            this->button46->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button46->Location = System::Drawing::Point(0, -102);
            this->button46->Name = L"button46";
            this->button46->Size = System::Drawing::Size(0, 102);
            this->button46->TabIndex = 1;
            this->button46->Text = L"NO";
            this->button46->UseVisualStyleBackColor = true;
            // 
            // label71
            // 
            this->label71->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label71->AutoSize = true;
            this->label71->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label71->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label71->Location = System::Drawing::Point(492, -253);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(0, 45);
            this->label71->TabIndex = 0;
            // 
            // panel15
            // 
            this->panel15->Controls->Add(this->button47);
            this->panel15->Controls->Add(this->button48);
            this->panel15->Controls->Add(this->label72);
            this->panel15->Location = System::Drawing::Point(139, 7);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(0, 0);
            this->panel15->TabIndex = 9;
            // 
            // button47
            // 
            this->button47->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button47->Location = System::Drawing::Point(0, -204);
            this->button47->Name = L"button47";
            this->button47->Size = System::Drawing::Size(0, 102);
            this->button47->TabIndex = 2;
            this->button47->Text = L"BACK";
            this->button47->UseVisualStyleBackColor = true;
            // 
            // button48
            // 
            this->button48->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button48->Location = System::Drawing::Point(0, -102);
            this->button48->Name = L"button48";
            this->button48->Size = System::Drawing::Size(0, 102);
            this->button48->TabIndex = 1;
            this->button48->Text = L"EXIT!";
            this->button48->UseVisualStyleBackColor = true;
            // 
            // label72
            // 
            this->label72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label72->AutoSize = true;
            this->label72->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label72->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label72->Location = System::Drawing::Point(504, -126);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(328, 45);
            this->label72->TabIndex = 0;
            this->label72->Text = L"This Party is Full!";
            // 
            // panel16
            // 
            this->panel16->Controls->Add(this->button49);
            this->panel16->Controls->Add(this->button50);
            this->panel16->Controls->Add(this->label73);
            this->panel16->Location = System::Drawing::Point(21, 12);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(0, 0);
            this->panel16->TabIndex = 8;
            // 
            // button49
            // 
            this->button49->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button49->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button49->Location = System::Drawing::Point(0, -204);
            this->button49->Name = L"button49";
            this->button49->Size = System::Drawing::Size(0, 102);
            this->button49->TabIndex = 2;
            this->button49->Text = L"BACK";
            this->button49->UseVisualStyleBackColor = true;
            // 
            // button50
            // 
            this->button50->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button50->Location = System::Drawing::Point(0, -102);
            this->button50->Name = L"button50";
            this->button50->Size = System::Drawing::Size(0, 102);
            this->button50->TabIndex = 1;
            this->button50->Text = L"EXIT!";
            this->button50->UseVisualStyleBackColor = true;
            // 
            // label73
            // 
            this->label73->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label73->AutoSize = true;
            this->label73->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label73->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label73->Location = System::Drawing::Point(556, -126);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(458, 45);
            this->label73->TabIndex = 0;
            this->label73->Text = L"Reservation is completed!";
            // 
            // encantoreservationbutton
            // 
            this->encantoreservationbutton->BackColor = System::Drawing::Color::White;
            this->encantoreservationbutton->CausesValidation = false;
            this->encantoreservationbutton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantoreservationbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantoreservationbutton->Location = System::Drawing::Point(597, 424);
            this->encantoreservationbutton->Name = L"encantoreservationbutton";
            this->encantoreservationbutton->Size = System::Drawing::Size(245, 55);
            this->encantoreservationbutton->TabIndex = 7;
            this->encantoreservationbutton->Text = L"OK";
            this->encantoreservationbutton->UseVisualStyleBackColor = false;
            this->encantoreservationbutton->Click += gcnew System::EventHandler(this, &MyForm::encantoreservationbutton_Click);
            // 
            // encantocomboBox
            // 
            this->encantocomboBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantocomboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantocomboBox->FormattingEnabled = true;
            this->encantocomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
                L"From 10:00AM To 12:00PM", L"From 12:30PM To 2:30PM",
                    L"From 3:00PM To 5:00PM", L"From 5:30PM To 7:30PM", L"From 8:00PM To 10:00PM", L"From 10:30PM To 12:30AM"
            });
            this->encantocomboBox->Location = System::Drawing::Point(427, 80);
            this->encantocomboBox->Name = L"encantocomboBox";
            this->encantocomboBox->Size = System::Drawing::Size(535, 53);
            this->encantocomboBox->TabIndex = 6;
            this->encantocomboBox->Text = L"             Choose Time";
            // 
            // totalprice5
            // 
            this->totalprice5->AutoSize = true;
            this->totalprice5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalprice5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->totalprice5->Location = System::Drawing::Point(854, 292);
            this->totalprice5->Name = L"totalprice5";
            this->totalprice5->Size = System::Drawing::Size(40, 45);
            this->totalprice5->TabIndex = 5;
            this->totalprice5->Text = L"0";
            this->totalprice5->Click += gcnew System::EventHandler(this, &MyForm::totalprice5_Click);
            // 
            // label75
            // 
            this->label75->AutoSize = true;
            this->label75->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label75->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label75->Location = System::Drawing::Point(419, 293);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(239, 45);
            this->label75->TabIndex = 4;
            this->label75->Text = L"Total Price : ";
            // 
            // numericUpDown5
            // 
            this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->numericUpDown5->Location = System::Drawing::Point(862, 176);
            this->numericUpDown5->Name = L"numericUpDown5";
            this->numericUpDown5->Size = System::Drawing::Size(100, 53);
            this->numericUpDown5->TabIndex = 3;
            this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown5_ValueChanged);
            // 
            // label76
            // 
            this->label76->AutoSize = true;
            this->label76->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label76->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label76->Location = System::Drawing::Point(419, 184);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(383, 45);
            this->label76->TabIndex = 1;
            this->label76->Text = L"Number Of Tickets : ";
            // 
            // reduserbooking
            // 
            this->reduserbooking->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->reduserbooking->Controls->Add(this->button55);
            this->reduserbooking->Controls->Add(this->button37);
            this->reduserbooking->Controls->Add(this->panel11);
            this->reduserbooking->Controls->Add(this->panel12);
            this->reduserbooking->Controls->Add(this->panel13);
            this->reduserbooking->Controls->Add(this->redreservationbutton);
            this->reduserbooking->Controls->Add(this->redcomboBox);
            this->reduserbooking->Controls->Add(this->totalprice4);
            this->reduserbooking->Controls->Add(this->label69);
            this->reduserbooking->Controls->Add(this->numericUpDown4);
            this->reduserbooking->Controls->Add(this->label70);
            this->reduserbooking->Location = System::Drawing::Point(0, 7);
            this->reduserbooking->Name = L"reduserbooking";
            this->reduserbooking->Size = System::Drawing::Size(0, 0);
            this->reduserbooking->TabIndex = 12;
            // 
            // button55
            // 
            this->button55->BackColor = System::Drawing::Color::White;
            this->button55->CausesValidation = false;
            this->button55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button55->Location = System::Drawing::Point(597, 592);
            this->button55->Name = L"button55";
            this->button55->Size = System::Drawing::Size(245, 55);
            this->button55->TabIndex = 14;
            this->button55->Text = L"Exit";
            this->button55->UseVisualStyleBackColor = false;
            this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
            // 
            // button37
            // 
            this->button37->BackColor = System::Drawing::Color::White;
            this->button37->CausesValidation = false;
            this->button37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button37->Location = System::Drawing::Point(597, 512);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(245, 55);
            this->button37->TabIndex = 11;
            this->button37->Text = L"Back";
            this->button37->UseVisualStyleBackColor = false;
            this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
            // 
            // panel11
            // 
            this->panel11->Controls->Add(this->label62);
            this->panel11->Controls->Add(this->button38);
            this->panel11->Controls->Add(this->button39);
            this->panel11->Controls->Add(this->label65);
            this->panel11->Location = System::Drawing::Point(3, 3);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(0, 0);
            this->panel11->TabIndex = 10;
            // 
            // label62
            // 
            this->label62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label62->AutoSize = true;
            this->label62->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label62->Location = System::Drawing::Point(343, -135);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(656, 45);
            this->label62->TabIndex = 3;
            this->label62->Text = L"Do you want to complete reservation\?";
            // 
            // button38
            // 
            this->button38->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button38->Location = System::Drawing::Point(0, -204);
            this->button38->Name = L"button38";
            this->button38->Size = System::Drawing::Size(0, 102);
            this->button38->TabIndex = 2;
            this->button38->Text = L"YES";
            this->button38->UseVisualStyleBackColor = true;
            // 
            // button39
            // 
            this->button39->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button39->Location = System::Drawing::Point(0, -102);
            this->button39->Name = L"button39";
            this->button39->Size = System::Drawing::Size(0, 102);
            this->button39->TabIndex = 1;
            this->button39->Text = L"NO";
            this->button39->UseVisualStyleBackColor = true;
            // 
            // label65
            // 
            this->label65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label65->AutoSize = true;
            this->label65->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label65->Location = System::Drawing::Point(492, -253);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(0, 45);
            this->label65->TabIndex = 0;
            // 
            // panel12
            // 
            this->panel12->Controls->Add(this->button40);
            this->panel12->Controls->Add(this->button41);
            this->panel12->Controls->Add(this->label66);
            this->panel12->Location = System::Drawing::Point(139, 7);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(0, 0);
            this->panel12->TabIndex = 9;
            // 
            // button40
            // 
            this->button40->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button40->Location = System::Drawing::Point(0, -204);
            this->button40->Name = L"button40";
            this->button40->Size = System::Drawing::Size(0, 102);
            this->button40->TabIndex = 2;
            this->button40->Text = L"BACK";
            this->button40->UseVisualStyleBackColor = true;
            // 
            // button41
            // 
            this->button41->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button41->Location = System::Drawing::Point(0, -102);
            this->button41->Name = L"button41";
            this->button41->Size = System::Drawing::Size(0, 102);
            this->button41->TabIndex = 1;
            this->button41->Text = L"EXIT!";
            this->button41->UseVisualStyleBackColor = true;
            // 
            // label66
            // 
            this->label66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label66->AutoSize = true;
            this->label66->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label66->Location = System::Drawing::Point(504, -126);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(328, 45);
            this->label66->TabIndex = 0;
            this->label66->Text = L"This Party is Full!";
            // 
            // panel13
            // 
            this->panel13->Controls->Add(this->button42);
            this->panel13->Controls->Add(this->button43);
            this->panel13->Controls->Add(this->label67);
            this->panel13->Location = System::Drawing::Point(21, 12);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(0, 0);
            this->panel13->TabIndex = 8;
            // 
            // button42
            // 
            this->button42->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button42->Location = System::Drawing::Point(0, -204);
            this->button42->Name = L"button42";
            this->button42->Size = System::Drawing::Size(0, 102);
            this->button42->TabIndex = 2;
            this->button42->Text = L"BACK";
            this->button42->UseVisualStyleBackColor = true;
            // 
            // button43
            // 
            this->button43->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button43->Location = System::Drawing::Point(0, -102);
            this->button43->Name = L"button43";
            this->button43->Size = System::Drawing::Size(0, 102);
            this->button43->TabIndex = 1;
            this->button43->Text = L"EXIT!";
            this->button43->UseVisualStyleBackColor = true;
            // 
            // label67
            // 
            this->label67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label67->AutoSize = true;
            this->label67->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label67->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label67->Location = System::Drawing::Point(556, -126);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(458, 45);
            this->label67->TabIndex = 0;
            this->label67->Text = L"Reservation is completed!";
            // 
            // redreservationbutton
            // 
            this->redreservationbutton->BackColor = System::Drawing::Color::White;
            this->redreservationbutton->CausesValidation = false;
            this->redreservationbutton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redreservationbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redreservationbutton->Location = System::Drawing::Point(597, 424);
            this->redreservationbutton->Name = L"redreservationbutton";
            this->redreservationbutton->Size = System::Drawing::Size(245, 55);
            this->redreservationbutton->TabIndex = 7;
            this->redreservationbutton->Text = L"OK";
            this->redreservationbutton->UseVisualStyleBackColor = false;
            this->redreservationbutton->Click += gcnew System::EventHandler(this, &MyForm::redreservationbutton_Click);
            // 
            // redcomboBox
            // 
            this->redcomboBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redcomboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redcomboBox->FormattingEnabled = true;
            this->redcomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
                L"From 10:00AM To 12:00PM", L"From 12:30PM To 2:30PM",
                    L"From 3:00PM To 5:00PM", L"From 5:30PM To 7:30PM", L"From 8:00PM To 10:00PM", L"From 10:30PM To 12:30AM"
            });
            this->redcomboBox->Location = System::Drawing::Point(427, 80);
            this->redcomboBox->Name = L"redcomboBox";
            this->redcomboBox->Size = System::Drawing::Size(535, 53);
            this->redcomboBox->TabIndex = 6;
            this->redcomboBox->Text = L"             Choose Time";
            // 
            // totalprice4
            // 
            this->totalprice4->AutoSize = true;
            this->totalprice4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalprice4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->totalprice4->Location = System::Drawing::Point(854, 289);
            this->totalprice4->Name = L"totalprice4";
            this->totalprice4->Size = System::Drawing::Size(40, 45);
            this->totalprice4->TabIndex = 5;
            this->totalprice4->Text = L"0";
            // 
            // label69
            // 
            this->label69->AutoSize = true;
            this->label69->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label69->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label69->Location = System::Drawing::Point(419, 293);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(239, 45);
            this->label69->TabIndex = 4;
            this->label69->Text = L"Total Price : ";
            // 
            // numericUpDown4
            // 
            this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->numericUpDown4->Location = System::Drawing::Point(862, 176);
            this->numericUpDown4->Name = L"numericUpDown4";
            this->numericUpDown4->Size = System::Drawing::Size(100, 53);
            this->numericUpDown4->TabIndex = 3;
            this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
            // 
            // label70
            // 
            this->label70->AutoSize = true;
            this->label70->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label70->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label70->Location = System::Drawing::Point(419, 184);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(383, 45);
            this->label70->TabIndex = 1;
            this->label70->Text = L"Number Of Tickets : ";
            // 
            // screamuserbooking
            // 
            this->screamuserbooking->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->screamuserbooking->Controls->Add(this->button53);
            this->screamuserbooking->Controls->Add(this->screamreservationbutton);
            this->screamuserbooking->Controls->Add(this->button30);
            this->screamuserbooking->Controls->Add(this->panel8);
            this->screamuserbooking->Controls->Add(this->panel9);
            this->screamuserbooking->Controls->Add(this->panel10);
            this->screamuserbooking->Controls->Add(this->screamcomboBox);
            this->screamuserbooking->Controls->Add(this->totalprice3);
            this->screamuserbooking->Controls->Add(this->label63);
            this->screamuserbooking->Controls->Add(this->numericUpDown3);
            this->screamuserbooking->Controls->Add(this->label64);
            this->screamuserbooking->Location = System::Drawing::Point(31, 4);
            this->screamuserbooking->Name = L"screamuserbooking";
            this->screamuserbooking->Size = System::Drawing::Size(0, 0);
            this->screamuserbooking->TabIndex = 11;
            // 
            // button53
            // 
            this->button53->BackColor = System::Drawing::Color::White;
            this->button53->CausesValidation = false;
            this->button53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button53->Location = System::Drawing::Point(597, 595);
            this->button53->Name = L"button53";
            this->button53->Size = System::Drawing::Size(245, 55);
            this->button53->TabIndex = 13;
            this->button53->Text = L"Exit";
            this->button53->UseVisualStyleBackColor = false;
            this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
            // 
            // screamreservationbutton
            // 
            this->screamreservationbutton->BackColor = System::Drawing::Color::White;
            this->screamreservationbutton->CausesValidation = false;
            this->screamreservationbutton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamreservationbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamreservationbutton->Location = System::Drawing::Point(597, 418);
            this->screamreservationbutton->Name = L"screamreservationbutton";
            this->screamreservationbutton->Size = System::Drawing::Size(245, 55);
            this->screamreservationbutton->TabIndex = 12;
            this->screamreservationbutton->Text = L"OK";
            this->screamreservationbutton->UseVisualStyleBackColor = false;
            this->screamreservationbutton->Click += gcnew System::EventHandler(this, &MyForm::screamreservationbutton_Click_1);
            // 
            // button30
            // 
            this->button30->BackColor = System::Drawing::Color::White;
            this->button30->CausesValidation = false;
            this->button30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button30->Location = System::Drawing::Point(597, 512);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(245, 55);
            this->button30->TabIndex = 11;
            this->button30->Text = L"Back";
            this->button30->UseVisualStyleBackColor = false;
            this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
            // 
            // panel8
            // 
            this->panel8->Controls->Add(this->label56);
            this->panel8->Controls->Add(this->button31);
            this->panel8->Controls->Add(this->button32);
            this->panel8->Controls->Add(this->label59);
            this->panel8->Location = System::Drawing::Point(3, 3);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(0, 0);
            this->panel8->TabIndex = 10;
            // 
            // label56
            // 
            this->label56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label56->Location = System::Drawing::Point(343, -135);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(656, 45);
            this->label56->TabIndex = 3;
            this->label56->Text = L"Do you want to complete reservation\?";
            // 
            // button31
            // 
            this->button31->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button31->Location = System::Drawing::Point(0, -204);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(0, 102);
            this->button31->TabIndex = 2;
            this->button31->Text = L"YES";
            this->button31->UseVisualStyleBackColor = true;
            // 
            // button32
            // 
            this->button32->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button32->Location = System::Drawing::Point(0, -102);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(0, 102);
            this->button32->TabIndex = 1;
            this->button32->Text = L"NO";
            this->button32->UseVisualStyleBackColor = true;
            // 
            // label59
            // 
            this->label59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(492, -253);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(0, 45);
            this->label59->TabIndex = 0;
            // 
            // panel9
            // 
            this->panel9->Controls->Add(this->button33);
            this->panel9->Controls->Add(this->button34);
            this->panel9->Controls->Add(this->label60);
            this->panel9->Location = System::Drawing::Point(139, 7);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(0, 0);
            this->panel9->TabIndex = 9;
            // 
            // button33
            // 
            this->button33->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button33->Location = System::Drawing::Point(0, -204);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(0, 102);
            this->button33->TabIndex = 2;
            this->button33->Text = L"BACK";
            this->button33->UseVisualStyleBackColor = true;
            // 
            // button34
            // 
            this->button34->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button34->Location = System::Drawing::Point(0, -102);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(0, 102);
            this->button34->TabIndex = 1;
            this->button34->Text = L"EXIT!";
            this->button34->UseVisualStyleBackColor = true;
            // 
            // label60
            // 
            this->label60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label60->AutoSize = true;
            this->label60->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label60->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label60->Location = System::Drawing::Point(504, -126);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(328, 45);
            this->label60->TabIndex = 0;
            this->label60->Text = L"This Party is Full!";
            // 
            // panel10
            // 
            this->panel10->Controls->Add(this->button35);
            this->panel10->Controls->Add(this->button36);
            this->panel10->Controls->Add(this->label61);
            this->panel10->Location = System::Drawing::Point(21, 12);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(0, 0);
            this->panel10->TabIndex = 8;
            // 
            // button35
            // 
            this->button35->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button35->Location = System::Drawing::Point(0, -204);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(0, 102);
            this->button35->TabIndex = 2;
            this->button35->Text = L"BACK";
            this->button35->UseVisualStyleBackColor = true;
            // 
            // button36
            // 
            this->button36->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button36->Location = System::Drawing::Point(0, -102);
            this->button36->Name = L"button36";
            this->button36->Size = System::Drawing::Size(0, 102);
            this->button36->TabIndex = 1;
            this->button36->Text = L"EXIT!";
            this->button36->UseVisualStyleBackColor = true;
            // 
            // label61
            // 
            this->label61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label61->AutoSize = true;
            this->label61->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label61->Location = System::Drawing::Point(556, -126);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(458, 45);
            this->label61->TabIndex = 0;
            this->label61->Text = L"Reservation is completed!";
            // 
            // screamcomboBox
            // 
            this->screamcomboBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screamcomboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screamcomboBox->FormattingEnabled = true;
            this->screamcomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
                L"From 10:00AM To 12:00PM", L"From 12:30PM To 2:30PM",
                    L"From 3:00PM To 5:00PM", L"From 5:30PM To 7:30PM", L"From 8:00PM To 10:00PM", L"From 10:30PM To 12:30AM"
            });
            this->screamcomboBox->Location = System::Drawing::Point(427, 80);
            this->screamcomboBox->Name = L"screamcomboBox";
            this->screamcomboBox->Size = System::Drawing::Size(535, 53);
            this->screamcomboBox->TabIndex = 6;
            this->screamcomboBox->Text = L"             Choose Time";
            this->screamcomboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::screamcomboBox_SelectedIndexChanged);
            // 
            // totalprice3
            // 
            this->totalprice3->AutoSize = true;
            this->totalprice3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalprice3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->totalprice3->Location = System::Drawing::Point(856, 288);
            this->totalprice3->Name = L"totalprice3";
            this->totalprice3->Size = System::Drawing::Size(40, 45);
            this->totalprice3->TabIndex = 5;
            this->totalprice3->Text = L"0";
            // 
            // label63
            // 
            this->label63->AutoSize = true;
            this->label63->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label63->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label63->Location = System::Drawing::Point(419, 293);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(239, 45);
            this->label63->TabIndex = 4;
            this->label63->Text = L"Total Price : ";
            // 
            // numericUpDown3
            // 
            this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->numericUpDown3->Location = System::Drawing::Point(862, 176);
            this->numericUpDown3->Name = L"numericUpDown3";
            this->numericUpDown3->Size = System::Drawing::Size(100, 53);
            this->numericUpDown3->TabIndex = 3;
            this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
            // 
            // label64
            // 
            this->label64->AutoSize = true;
            this->label64->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label64->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label64->Location = System::Drawing::Point(419, 184);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(383, 45);
            this->label64->TabIndex = 1;
            this->label64->Text = L"Number Of Tickets : ";
            // 
            // spideruserbooking
            // 
            this->spideruserbooking->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->spideruserbooking->Controls->Add(this->button57);
            this->spideruserbooking->Controls->Add(this->button23);
            this->spideruserbooking->Controls->Add(this->panel5);
            this->spideruserbooking->Controls->Add(this->panel6);
            this->spideruserbooking->Controls->Add(this->panel7);
            this->spideruserbooking->Controls->Add(this->spiderreservationbutton);
            this->spideruserbooking->Controls->Add(this->spidercomboBox);
            this->spideruserbooking->Controls->Add(this->totalprice2);
            this->spideruserbooking->Controls->Add(this->label57);
            this->spideruserbooking->Controls->Add(this->numericUpDown2);
            this->spideruserbooking->Controls->Add(this->label58);
            this->spideruserbooking->Location = System::Drawing::Point(-5, 0);
            this->spideruserbooking->Name = L"spideruserbooking";
            this->spideruserbooking->Size = System::Drawing::Size(0, 0);
            this->spideruserbooking->TabIndex = 10;
            // 
            // button57
            // 
            this->button57->BackColor = System::Drawing::Color::White;
            this->button57->CausesValidation = false;
            this->button57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button57->Location = System::Drawing::Point(597, 593);
            this->button57->Name = L"button57";
            this->button57->Size = System::Drawing::Size(245, 55);
            this->button57->TabIndex = 14;
            this->button57->Text = L"Exit";
            this->button57->UseVisualStyleBackColor = false;
            this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
            // 
            // button23
            // 
            this->button23->BackColor = System::Drawing::Color::White;
            this->button23->CausesValidation = false;
            this->button23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button23->Location = System::Drawing::Point(597, 512);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(245, 55);
            this->button23->TabIndex = 11;
            this->button23->Text = L"Back";
            this->button23->UseVisualStyleBackColor = false;
            this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
            // 
            // panel5
            // 
            this->panel5->Controls->Add(this->label52);
            this->panel5->Controls->Add(this->button24);
            this->panel5->Controls->Add(this->button25);
            this->panel5->Controls->Add(this->label53);
            this->panel5->Location = System::Drawing::Point(3, 3);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(0, 0);
            this->panel5->TabIndex = 10;
            // 
            // label52
            // 
            this->label52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label52->Location = System::Drawing::Point(343, -135);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(656, 45);
            this->label52->TabIndex = 3;
            this->label52->Text = L"Do you want to complete reservation\?";
            // 
            // button24
            // 
            this->button24->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button24->Location = System::Drawing::Point(0, -204);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(0, 102);
            this->button24->TabIndex = 2;
            this->button24->Text = L"YES";
            this->button24->UseVisualStyleBackColor = true;
            // 
            // button25
            // 
            this->button25->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button25->Location = System::Drawing::Point(0, -102);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(0, 102);
            this->button25->TabIndex = 1;
            this->button25->Text = L"NO";
            this->button25->UseVisualStyleBackColor = true;
            // 
            // label53
            // 
            this->label53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(492, -253);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(0, 45);
            this->label53->TabIndex = 0;
            // 
            // panel6
            // 
            this->panel6->Controls->Add(this->button26);
            this->panel6->Controls->Add(this->button27);
            this->panel6->Controls->Add(this->label54);
            this->panel6->Location = System::Drawing::Point(139, 7);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(0, 0);
            this->panel6->TabIndex = 9;
            // 
            // button26
            // 
            this->button26->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button26->Location = System::Drawing::Point(0, -204);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(0, 102);
            this->button26->TabIndex = 2;
            this->button26->Text = L"BACK";
            this->button26->UseVisualStyleBackColor = true;
            // 
            // button27
            // 
            this->button27->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button27->Location = System::Drawing::Point(0, -102);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(0, 102);
            this->button27->TabIndex = 1;
            this->button27->Text = L"EXIT!";
            this->button27->UseVisualStyleBackColor = true;
            // 
            // label54
            // 
            this->label54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(504, -126);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(328, 45);
            this->label54->TabIndex = 0;
            this->label54->Text = L"This Party is Full!";
            // 
            // panel7
            // 
            this->panel7->Controls->Add(this->button28);
            this->panel7->Controls->Add(this->button29);
            this->panel7->Controls->Add(this->label55);
            this->panel7->Location = System::Drawing::Point(21, 12);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(0, 0);
            this->panel7->TabIndex = 8;
            // 
            // button28
            // 
            this->button28->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button28->Location = System::Drawing::Point(0, -204);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(0, 102);
            this->button28->TabIndex = 2;
            this->button28->Text = L"BACK";
            this->button28->UseVisualStyleBackColor = true;
            // 
            // button29
            // 
            this->button29->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button29->Location = System::Drawing::Point(0, -102);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(0, 102);
            this->button29->TabIndex = 1;
            this->button29->Text = L"EXIT!";
            this->button29->UseVisualStyleBackColor = true;
            // 
            // label55
            // 
            this->label55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label55->Location = System::Drawing::Point(556, -126);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(458, 45);
            this->label55->TabIndex = 0;
            this->label55->Text = L"Reservation is completed!";
            // 
            // spiderreservationbutton
            // 
            this->spiderreservationbutton->BackColor = System::Drawing::Color::White;
            this->spiderreservationbutton->CausesValidation = false;
            this->spiderreservationbutton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spiderreservationbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spiderreservationbutton->Location = System::Drawing::Point(597, 424);
            this->spiderreservationbutton->Name = L"spiderreservationbutton";
            this->spiderreservationbutton->Size = System::Drawing::Size(245, 55);
            this->spiderreservationbutton->TabIndex = 7;
            this->spiderreservationbutton->Text = L"OK";
            this->spiderreservationbutton->UseVisualStyleBackColor = false;
            this->spiderreservationbutton->Click += gcnew System::EventHandler(this, &MyForm::spiderreservationbutton_Click_1);
            // 
            // spidercomboBox
            // 
            this->spidercomboBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spidercomboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spidercomboBox->FormattingEnabled = true;
            this->spidercomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"From 10 AM To 1 PM", L"From 1:30 PM To 4:30 PM",
                    L"From 5 PM To 8 PM", L"From 8:30 PM To 11:30 PM"
            });
            this->spidercomboBox->Location = System::Drawing::Point(427, 80);
            this->spidercomboBox->Name = L"spidercomboBox";
            this->spidercomboBox->Size = System::Drawing::Size(535, 53);
            this->spidercomboBox->TabIndex = 6;
            this->spidercomboBox->Text = L"             Choose Time";
            // 
            // totalprice2
            // 
            this->totalprice2->AutoSize = true;
            this->totalprice2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalprice2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->totalprice2->Location = System::Drawing::Point(854, 289);
            this->totalprice2->Name = L"totalprice2";
            this->totalprice2->Size = System::Drawing::Size(40, 45);
            this->totalprice2->TabIndex = 5;
            this->totalprice2->Text = L"0";
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(419, 293);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(239, 45);
            this->label57->TabIndex = 4;
            this->label57->Text = L"Total Price : ";
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->numericUpDown2->Location = System::Drawing::Point(862, 176);
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(100, 53);
            this->numericUpDown2->TabIndex = 3;
            this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(419, 184);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(383, 45);
            this->label58->TabIndex = 1;
            this->label58->Text = L"Number Of Tickets : ";
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->button12);
            this->panel3->Controls->Add(this->listBox3);
            this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel3->Location = System::Drawing::Point(87, 84);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(0, 0);
            this->panel3->TabIndex = 8;
            // 
            // button12
            // 
            this->button12->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button12->Location = System::Drawing::Point(0, -1000);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(0, 1000);
            this->button12->TabIndex = 1;
            this->button12->Text = L"Back";
            this->button12->UseVisualStyleBackColor = true;
            // 
            // listBox3
            // 
            this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->listBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->listBox3->FormattingEnabled = true;
            this->listBox3->ItemHeight = 42;
            this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
                L"\t\t\t\t\t\t", L"", L"", L"", L"\t\t\t\t\t1.From 10:00AM  To  12:00PM",
                    L"\t\t\t\t\t2.From 12:30PM  To  2:30PM", L"\t\t\t\t\t3.From 3:00PM  To  5:00PM", L"\t\t\t\t\t4.From 5:30PM  To  7:30PM", L"\t\t\t\t\t5.From 8:00PM  To  10:00PM",
                    L"\t\t\t\t\t6.From 10:30PM  To  12:30AM", L"\t\t\t\t\t7.From 1:00AM  To  3:00AM"
            });
            this->listBox3->Location = System::Drawing::Point(0, 0);
            this->listBox3->Name = L"listBox3";
            this->listBox3->Size = System::Drawing::Size(0, 0);
            this->listBox3->TabIndex = 0;
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->button13);
            this->panel4->Controls->Add(this->listBox4);
            this->panel4->Location = System::Drawing::Point(11, 11);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(0, 0);
            this->panel4->TabIndex = 7;
            // 
            // button13
            // 
            this->button13->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button13->ForeColor = System::Drawing::Color::Red;
            this->button13->Location = System::Drawing::Point(0, -61);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(0, 61);
            this->button13->TabIndex = 1;
            this->button13->Text = L"Back";
            this->button13->UseVisualStyleBackColor = true;
            // 
            // listBox4
            // 
            this->listBox4->BackColor = System::Drawing::Color::White;
            this->listBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->listBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->listBox4->FormattingEnabled = true;
            this->listBox4->ItemHeight = 45;
            this->listBox4->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
                L"\t\t\t\t\t", L"\t\t\t\t\t", L"", L"", L"\t\t\t\t\t1.From 10:00AM  To  1:00PM",
                    L"\t\t\t\t\t2.From 1:30PM  To  4:30PM", L"\t\t\t\t\t3.From 5:00PM  To  8:00PM", L"\t\t\t\t\t4.From 8:30PM  To  11:30PM", L"\t\t\t\t\t5.From 12:00AM  To  3:00AM"
            });
            this->listBox4->Location = System::Drawing::Point(0, 0);
            this->listBox4->Name = L"listBox4";
            this->listBox4->Size = System::Drawing::Size(0, 0);
            this->listBox4->TabIndex = 0;
            // 
            // spiderbooking
            // 
            this->spiderbooking->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->spiderbooking->BackColor = System::Drawing::Color::White;
            this->spiderbooking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->spiderbooking->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->spiderbooking->Location = System::Drawing::Point(685, -310);
            this->spiderbooking->Name = L"spiderbooking";
            this->spiderbooking->Size = System::Drawing::Size(272, 75);
            this->spiderbooking->TabIndex = 6;
            this->spiderbooking->UseVisualStyleBackColor = false;
            this->spiderbooking->Click += gcnew System::EventHandler(this, &MyForm::spiderbooking_Click);
            // 
            // screambooking
            // 
            this->screambooking->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->screambooking->BackColor = System::Drawing::Color::White;
            this->screambooking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->screambooking->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->screambooking->Location = System::Drawing::Point(685, -104);
            this->screambooking->Name = L"screambooking";
            this->screambooking->Size = System::Drawing::Size(272, 75);
            this->screambooking->TabIndex = 5;
            this->screambooking->UseVisualStyleBackColor = false;
            this->screambooking->Click += gcnew System::EventHandler(this, &MyForm::screambooking_Click);
            // 
            // button16
            // 
            this->button16->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->button16->BackColor = System::Drawing::Color::White;
            this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button16->Location = System::Drawing::Point(685, 201);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(272, 75);
            this->button16->TabIndex = 4;
            this->button16->Text = L"Back";
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
            // 
            // encantobooking
            // 
            this->encantobooking->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->encantobooking->BackColor = System::Drawing::Color::White;
            this->encantobooking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->encantobooking->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->encantobooking->Location = System::Drawing::Point(685, 93);
            this->encantobooking->Name = L"encantobooking";
            this->encantobooking->Size = System::Drawing::Size(272, 75);
            this->encantobooking->TabIndex = 3;
            this->encantobooking->UseVisualStyleBackColor = false;
            this->encantobooking->Click += gcnew System::EventHandler(this, &MyForm::encantobooking_Click);
            // 
            // redbooking
            // 
            this->redbooking->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->redbooking->BackColor = System::Drawing::Color::White;
            this->redbooking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redbooking->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->redbooking->Location = System::Drawing::Point(685, -2);
            this->redbooking->Name = L"redbooking";
            this->redbooking->Size = System::Drawing::Size(272, 75);
            this->redbooking->TabIndex = 2;
            this->redbooking->UseVisualStyleBackColor = false;
            this->redbooking->Click += gcnew System::EventHandler(this, &MyForm::redbooking_Click);
            // 
            // batbooking
            // 
            this->batbooking->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->batbooking->BackColor = System::Drawing::Color::White;
            this->batbooking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batbooking->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batbooking->Location = System::Drawing::Point(685, -209);
            this->batbooking->Name = L"batbooking";
            this->batbooking->Size = System::Drawing::Size(272, 75);
            this->batbooking->TabIndex = 1;
            this->batbooking->UseVisualStyleBackColor = false;
            this->batbooking->Click += gcnew System::EventHandler(this, &MyForm::batbooking_Click);
            // 
            // batuserbooking
            // 
            this->batuserbooking->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->batuserbooking->Controls->Add(this->button54);
            this->batuserbooking->Controls->Add(this->button22);
            this->batuserbooking->Controls->Add(this->remender_ticket_panel);
            this->batuserbooking->Controls->Add(this->party_is_full_panel);
            this->batuserbooking->Controls->Add(this->reservationcompletepanel);
            this->batuserbooking->Controls->Add(this->batreservationbutton);
            this->batuserbooking->Controls->Add(this->batcombobox);
            this->batuserbooking->Controls->Add(this->Totalprice);
            this->batuserbooking->Controls->Add(this->label13);
            this->batuserbooking->Controls->Add(this->numericUpDown1);
            this->batuserbooking->Controls->Add(this->label12);
            this->batuserbooking->Location = System::Drawing::Point(-6, 0);
            this->batuserbooking->Name = L"batuserbooking";
            this->batuserbooking->Size = System::Drawing::Size(0, 0);
            this->batuserbooking->TabIndex = 9;
            // 
            // button54
            // 
            this->button54->BackColor = System::Drawing::Color::White;
            this->button54->CausesValidation = false;
            this->button54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button54->Location = System::Drawing::Point(597, 602);
            this->button54->Name = L"button54";
            this->button54->Size = System::Drawing::Size(245, 55);
            this->button54->TabIndex = 14;
            this->button54->Text = L"Exit";
            this->button54->UseVisualStyleBackColor = false;
            this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
            // 
            // button22
            // 
            this->button22->BackColor = System::Drawing::Color::White;
            this->button22->CausesValidation = false;
            this->button22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button22->Location = System::Drawing::Point(597, 512);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(245, 55);
            this->button22->TabIndex = 11;
            this->button22->Text = L"Back";
            this->button22->UseVisualStyleBackColor = false;
            this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click_1);
            // 
            // remender_ticket_panel
            // 
            this->remender_ticket_panel->Controls->Add(this->label16);
            this->remender_ticket_panel->Controls->Add(this->button19);
            this->remender_ticket_panel->Controls->Add(this->button20);
            this->remender_ticket_panel->Controls->Add(this->label15);
            this->remender_ticket_panel->Location = System::Drawing::Point(3, 3);
            this->remender_ticket_panel->Name = L"remender_ticket_panel";
            this->remender_ticket_panel->Size = System::Drawing::Size(0, 0);
            this->remender_ticket_panel->TabIndex = 10;
            // 
            // label16
            // 
            this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(343, -135);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(656, 45);
            this->label16->TabIndex = 3;
            this->label16->Text = L"Do you want to complete reservation\?";
            this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
            // 
            // button19
            // 
            this->button19->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button19->Location = System::Drawing::Point(0, -204);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(0, 102);
            this->button19->TabIndex = 2;
            this->button19->Text = L"YES";
            this->button19->UseVisualStyleBackColor = true;
            this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
            // 
            // button20
            // 
            this->button20->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button20->Location = System::Drawing::Point(0, -102);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(0, 102);
            this->button20->TabIndex = 1;
            this->button20->Text = L"NO";
            this->button20->UseVisualStyleBackColor = true;
            this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
            // 
            // label15
            // 
            this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(492, -253);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(0, 45);
            this->label15->TabIndex = 0;
            // 
            // party_is_full_panel
            // 
            this->party_is_full_panel->Controls->Add(this->button17);
            this->party_is_full_panel->Controls->Add(this->button18);
            this->party_is_full_panel->Controls->Add(this->label14);
            this->party_is_full_panel->Location = System::Drawing::Point(139, 7);
            this->party_is_full_panel->Name = L"party_is_full_panel";
            this->party_is_full_panel->Size = System::Drawing::Size(0, 0);
            this->party_is_full_panel->TabIndex = 9;
            this->party_is_full_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::party_is_full_panel_Paint);
            // 
            // button17
            // 
            this->button17->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button17->Location = System::Drawing::Point(0, -204);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(0, 102);
            this->button17->TabIndex = 2;
            this->button17->Text = L"BACK";
            this->button17->UseVisualStyleBackColor = true;
            this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
            // 
            // button18
            // 
            this->button18->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button18->Location = System::Drawing::Point(0, -102);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(0, 102);
            this->button18->TabIndex = 1;
            this->button18->Text = L"EXIT!";
            this->button18->UseVisualStyleBackColor = true;
            this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
            // 
            // label14
            // 
            this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(504, -126);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(328, 45);
            this->label14->TabIndex = 0;
            this->label14->Text = L"This Party is Full!";
            // 
            // reservationcompletepanel
            // 
            this->reservationcompletepanel->Controls->Add(this->button15);
            this->reservationcompletepanel->Controls->Add(this->button14);
            this->reservationcompletepanel->Controls->Add(this->label11);
            this->reservationcompletepanel->Location = System::Drawing::Point(21, 12);
            this->reservationcompletepanel->Name = L"reservationcompletepanel";
            this->reservationcompletepanel->Size = System::Drawing::Size(0, 0);
            this->reservationcompletepanel->TabIndex = 8;
            // 
            // button15
            // 
            this->button15->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button15->Location = System::Drawing::Point(0, -204);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(0, 102);
            this->button15->TabIndex = 2;
            this->button15->Text = L"BACK";
            this->button15->UseVisualStyleBackColor = true;
            this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
            // 
            // button14
            // 
            this->button14->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(0, -102);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(0, 102);
            this->button14->TabIndex = 1;
            this->button14->Text = L"EXIT!";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
            // 
            // label11
            // 
            this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(556, -126);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(458, 45);
            this->label11->TabIndex = 0;
            this->label11->Text = L"Reservation is completed!";
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            // 
            // batreservationbutton
            // 
            this->batreservationbutton->BackColor = System::Drawing::Color::White;
            this->batreservationbutton->CausesValidation = false;
            this->batreservationbutton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batreservationbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batreservationbutton->Location = System::Drawing::Point(597, 424);
            this->batreservationbutton->Name = L"batreservationbutton";
            this->batreservationbutton->Size = System::Drawing::Size(245, 55);
            this->batreservationbutton->TabIndex = 7;
            this->batreservationbutton->Text = L"OK";
            this->batreservationbutton->UseVisualStyleBackColor = false;
            this->batreservationbutton->Click += gcnew System::EventHandler(this, &MyForm::batreservationbutton_Click);
            // 
            // batcombobox
            // 
            this->batcombobox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->batcombobox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->batcombobox->FormattingEnabled = true;
            this->batcombobox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"From 10 AM To 1 PM", L"From 1:30 PM To 4:30 PM",
                    L"From 5 PM To 8 PM", L"From 8:30 PM To 11:30 PM"
            });
            this->batcombobox->Location = System::Drawing::Point(427, 80);
            this->batcombobox->Name = L"batcombobox";
            this->batcombobox->Size = System::Drawing::Size(535, 53);
            this->batcombobox->TabIndex = 6;
            this->batcombobox->Text = L"             Choose Time";
            // 
            // Totalprice
            // 
            this->Totalprice->AutoSize = true;
            this->Totalprice->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Totalprice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Totalprice->Location = System::Drawing::Point(854, 289);
            this->Totalprice->Name = L"Totalprice";
            this->Totalprice->Size = System::Drawing::Size(40, 45);
            this->Totalprice->TabIndex = 5;
            this->Totalprice->Text = L"0";
            this->Totalprice->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(419, 293);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(239, 45);
            this->label13->TabIndex = 4;
            this->label13->Text = L"Total Price : ";
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->numericUpDown1->Location = System::Drawing::Point(862, 176);
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(100, 53);
            this->numericUpDown1->TabIndex = 3;
            this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(419, 184);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(383, 45);
            this->label12->TabIndex = 1;
            this->label12->Text = L"Number Of Tickets : ";
            // 
            // suggestionpanel
            // 
            this->suggestionpanel->Controls->Add(this->button51);
            this->suggestionpanel->Controls->Add(this->label74);
            this->suggestionpanel->Controls->Add(this->label51);
            this->suggestionpanel->Controls->Add(this->label18);
            this->suggestionpanel->Controls->Add(this->button21);
            this->suggestionpanel->Controls->Add(this->label17);
            this->suggestionpanel->Location = System::Drawing::Point(0, -69);
            this->suggestionpanel->Name = L"suggestionpanel";
            this->suggestionpanel->Size = System::Drawing::Size(0, 0);
            this->suggestionpanel->TabIndex = 10;
            this->suggestionpanel->Visible = false;
            // 
            // button51
            // 
            this->button51->BackColor = System::Drawing::Color::White;
            this->button51->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button51->Location = System::Drawing::Point(0, -136);
            this->button51->Name = L"button51";
            this->button51->Size = System::Drawing::Size(0, 72);
            this->button51->TabIndex = 6;
            this->button51->Text = L"OK";
            this->button51->UseVisualStyleBackColor = false;
            this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
            // 
            // label74
            // 
            this->label74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label74->AutoSize = true;
            this->label74->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label74->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label74->Location = System::Drawing::Point(522, 53);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(442, 45);
            this->label74->TabIndex = 5;
            this->label74->Text = L"Do You Want To Book \?\?";
            // 
            // label51
            // 
            this->label51->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(-61, -11);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(0, 45);
            this->label51->TabIndex = 4;
            // 
            // label18
            // 
            this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(413, -89);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(788, 45);
            this->label18->TabIndex = 3;
            this->label18->Text = L"There Are Available Seats At Party Number :";
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::Color::White;
            this->button21->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button21->Location = System::Drawing::Point(0, -64);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(0, 64);
            this->button21->TabIndex = 2;
            this->button21->Text = L"BACK";
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
            // 
            // label17
            // 
            this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(513, -174);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(554, 45);
            this->label17->TabIndex = 0;
            this->label17->Text = L"You Are Late For This Party !!!";
            // 
            // aboutuspanel
            // 
            this->aboutuspanel->Controls->Add(this->button52);
            this->aboutuspanel->Controls->Add(this->aboutuslabel);
            this->aboutuspanel->Location = System::Drawing::Point(0, 3);
            this->aboutuspanel->Name = L"aboutuspanel";
            this->aboutuspanel->Size = System::Drawing::Size(0, 0);
            this->aboutuspanel->TabIndex = 11;
            this->aboutuspanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint_1);
            // 
            // button52
            // 
            this->button52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button52->BackColor = System::Drawing::Color::White;
            this->button52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button52->Location = System::Drawing::Point(-175, -85);
            this->button52->Name = L"button52";
            this->button52->Size = System::Drawing::Size(127, 54);
            this->button52->TabIndex = 1;
            this->button52->Text = L"Back";
            this->button52->UseVisualStyleBackColor = false;
            this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
            // 
            // aboutuslabel
            // 
            this->aboutuslabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->aboutuslabel->AutoSize = true;
            this->aboutuslabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->aboutuslabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->aboutuslabel->Location = System::Drawing::Point(467, -222);
            this->aboutuslabel->Name = L"aboutuslabel";
            this->aboutuslabel->Size = System::Drawing::Size(696, 405);
            this->aboutuslabel->TabIndex = 0;
            this->aboutuslabel->Text = resources->GetString(L"aboutuslabel.Text");
            // 
            // MyForm
            // 
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1531, 724);
            this->Controls->Add(this->aboutuspanel);
            this->Controls->Add(this->suggestionpanel);
            this->Controls->Add(this->batuserbooking);
            this->Controls->Add(this->bookingpanel);
            this->Controls->Add(this->timing_panel);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->Exit);
            this->Controls->Add(this->About);
            this->Controls->Add(this->Booking);
            this->Controls->Add(this->Timing);
            this->Controls->Add(this->Movies);
            this->Controls->Add(this->title);
            this->MinimumSize = System::Drawing::Size(1200, 700);
            this->Name = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->redinfo->ResumeLayout(false);
            this->redinfo->PerformLayout();
            this->batinfo->ResumeLayout(false);
            this->batinfo->PerformLayout();
            this->encantoinfo->ResumeLayout(false);
            this->encantoinfo->PerformLayout();
            this->spidermaninfo->ResumeLayout(false);
            this->spidermaninfo->PerformLayout();
            this->screaminfo->ResumeLayout(false);
            this->screaminfo->PerformLayout();
            this->timing_panel->ResumeLayout(false);
            this->twoH_timing->ResumeLayout(false);
            this->threeH_panel->ResumeLayout(false);
            this->bookingpanel->ResumeLayout(false);
            this->encantouserbooking->ResumeLayout(false);
            this->encantouserbooking->PerformLayout();
            this->panel14->ResumeLayout(false);
            this->panel14->PerformLayout();
            this->panel15->ResumeLayout(false);
            this->panel15->PerformLayout();
            this->panel16->ResumeLayout(false);
            this->panel16->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
            this->reduserbooking->ResumeLayout(false);
            this->reduserbooking->PerformLayout();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            this->panel13->ResumeLayout(false);
            this->panel13->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
            this->screamuserbooking->ResumeLayout(false);
            this->screamuserbooking->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
            this->spideruserbooking->ResumeLayout(false);
            this->spideruserbooking->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->batuserbooking->ResumeLayout(false);
            this->batuserbooking->PerformLayout();
            this->remender_ticket_panel->ResumeLayout(false);
            this->remender_ticket_panel->PerformLayout();
            this->party_is_full_panel->ResumeLayout(false);
            this->party_is_full_panel->PerformLayout();
            this->reservationcompletepanel->ResumeLayout(false);
            this->reservationcompletepanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->suggestionpanel->ResumeLayout(false);
            this->suggestionpanel->PerformLayout();
            this->aboutuspanel->ResumeLayout(false);
            this->aboutuspanel->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

		
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Movies_Click(System::Object^ sender, System::EventArgs^ e) {
	
	panel1->Show();
	panel1->Dock = System::Windows::Forms::DockStyle::Fill;
	title->Hide();
    spidermaninfo->Hide();
    batinfo->Hide();
    screaminfo->Hide();
    encantoinfo->Hide();
    redinfo->Hide();
}
private: System::Void back1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	title->Show();
}
private: System::Void spiderman_Click(System::Object^ sender, System::EventArgs^ e) {
	spidermaninfo->Show();
	spidermaninfo->Dock = System::Windows::Forms::DockStyle::Fill;
    label2->Hide();
	

	spidermanname->Text = gcnew System::String(movies[0].title.c_str());
	spidermandirector->Text = gcnew System::String(movies[0].Director.c_str());
	spidermanactor1->Text = gcnew System::String(movies[0].Actors[0].c_str());
	spidermanactor2->Text = gcnew System::String(movies[0].Actors[1].c_str());
	spidermanactor3->Text = gcnew System::String(movies[0].Actors[2].c_str());
	spidermanhall->Text = gcnew System::String(movies[0].screen_info.hall.id.c_str());
	spidermanduration->Text = /*Convert::ToString(movies[0].screen_info.time.hours)*/ "2:28";
	spidermanrating->Text = gcnew System::String(movies[0].rating.c_str());

}



private: System::Void batman_Click(System::Object^ sender, System::EventArgs^ e) {
	batinfo->Show();
	batinfo->Dock = System::Windows::Forms::DockStyle::Fill;
    label2->Hide();


	batname->Text = gcnew System::String(movies[1].title.c_str());
	batdirector->Text = gcnew System::String(movies[1].Director.c_str());
	batactor1->Text = gcnew System::String(movies[1].Actors[0].c_str());
	batactor2->Text = gcnew System::String(movies[1].Actors[1].c_str());
	batactor3->Text = gcnew System::String(movies[1].Actors[2].c_str());
	bathall->Text = gcnew System::String(movies[1].screen_info.hall.id.c_str());
	batduration->Text = /*Convert::ToString(movies[1].screen_info.time.hours)*/ "2:56";
	batrating->Text = gcnew System::String(movies[1].rating.c_str());

}
private: System::Void scream_Click(System::Object^ sender, System::EventArgs^ e) {
    screaminfo->Show();
    screaminfo->Dock = System::Windows::Forms::DockStyle::Fill;
    label2->Hide();
    batman->Hide();
    rednotice->Hide();


    screamname->Text = gcnew System::String(movies[4].title.c_str());
    screamdirector->Text = gcnew System::String(movies[4].Director.c_str());
    screamactor1->Text = gcnew System::String(movies[4].Actors[0].c_str());
    screamactor2->Text = gcnew System::String(movies[4].Actors[1].c_str());
    screamactor3->Text = gcnew System::String(movies[4].Actors[2].c_str());
    screamhall->Text = gcnew System::String(movies[4].screen_info.hall.id.c_str());
    screamduration->Text = /*Convert::ToString(movies[4].screen_info.time.hours) */ "1:54";
    screamrating->Text = gcnew System::String(movies[4].rating.c_str());
}
private: System::Void rednotice_Click(System::Object^ sender, System::EventArgs^ e) {
    redinfo->Show();
    redinfo->Dock = System::Windows::Forms::DockStyle::Fill;
    title->Hide();


    redname->Text = gcnew System::String(movies[2].title.c_str());
    reddirector->Text = gcnew System::String(movies[2].Director.c_str());
    redactor1->Text = gcnew System::String(movies[2].Actors[0].c_str());
    redactor2->Text = gcnew System::String(movies[2].Actors[1].c_str());
    redactor3->Text = gcnew System::String(movies[2].Actors[2].c_str());
    redhall->Text = gcnew System::String(movies[2].screen_info.hall.id.c_str());
    redduration->Text = /*Convert::ToString(movies[2].screen_info.time.hours)*/ "1:58";
    redrating->Text = gcnew System::String(movies[2].rating.c_str());
}

private: System::Void encanto_Click(System::Object^ sender, System::EventArgs^ e) {
    encantoinfo->Show();
    encantoinfo->Dock = System::Windows::Forms::DockStyle::Fill;
    title->Hide();


    encantoname->Text = gcnew System::String(movies[3].title.c_str());
    encantodirector->Text = gcnew System::String(movies[3].Director.c_str());
    encantoactor1->Text = gcnew System::String(movies[3].Actors[0].c_str());
    encantoactor2->Text = gcnew System::String(movies[3].Actors[1].c_str());
    encantoactor3->Text = gcnew System::String(movies[3].Actors[2].c_str());
    encantohall->Text = gcnew System::String(movies[3].screen_info.hall.id.c_str());
    encantoduration->Text = /*Convert::ToString(movies[3].screen_info.time.hours) */ "1:42";
    encantorating->Text = gcnew System::String(movies[3].rating.c_str());
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    batinfo->Hide();
    label2->Show();
   
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    screaminfo->Hide();
    label2->Show();
    batman->Show();
    rednotice->Show();
    
}



private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    redinfo->Hide();
    label2->Show();
    
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    spidermaninfo->Hide();
    label2->Show();
}
private: System::Void screamname_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    encantoinfo->Hide();
    label2->Show();
  
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
    threeH_panel->Show();
    threeH_panel->Dock = System::Windows::Forms::DockStyle::Fill;

}
private: System::Void Timing_Click(System::Object^ sender, System::EventArgs^ e) {
    timing_panel->Show();
    timing_panel->Dock = System::Windows::Forms::DockStyle::Fill;
    title->Hide();
    batman_timing->Text = gcnew System::String(movies[1].title.c_str());
    rednotices_timing->Text = gcnew System::String(movies[2].title.c_str());
    scream_timing->Text = gcnew System::String(movies[4].title.c_str());
    encanto_timing->Text = gcnew System::String(movies[3].title.c_str());
    spiderman_timing1->Text = gcnew System::String(movies[0].title.c_str());
}
private: System::Void button9_Click_2(System::Object^ sender, System::EventArgs^ e) {
    timing_panel->Hide();
    title->Show();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void encanto_timing_Click(System::Object^ sender, System::EventArgs^ e) {
    twoH_timing->Show();
    twoH_timing->Dock = System::Windows::Forms::DockStyle::Fill;
}



private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    threeH_panel->Hide();
    timing_panel->Show();
}
private: System::Void spiderman_timing1_Click(System::Object^ sender, System::EventArgs^ e) {
    threeH_panel->Show();
    threeH_panel->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    twoH_timing->Hide();
    timing_panel->Show();
}
private: System::Void rednotices_timing_Click(System::Object^ sender, System::EventArgs^ e) {
    twoH_timing->Show();
    twoH_timing->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void scream_timing_Click(System::Object^ sender, System::EventArgs^ e) {
    twoH_timing->Show();
    twoH_timing->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void Booking_Click(System::Object^ sender, System::EventArgs^ e) {
    bookingpanel->Show();
    bookingpanel->Dock = System::Windows::Forms::DockStyle::Fill;
    title->Hide();
    spiderbooking->Text = gcnew System::String(movies[0].title.c_str());
    batbooking->Text = gcnew System::String(movies[1].title.c_str());
    encantobooking->Text = gcnew System::String(movies[3].title.c_str());
    redbooking->Text = gcnew System::String(movies[2].title.c_str());
    screambooking->Text = gcnew System::String(movies[4].title.c_str());



}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    bookingpanel->Hide();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt16(numericUpDown1->Value);
    Totalprice->Text = Convert::ToString(i * price) + " LE ";

}
private: System::Void batbooking_Click(System::Object^ sender, System::EventArgs^ e) {
    batuserbooking->Show();
    batuserbooking->Dock = System::Windows::Forms::DockStyle::Fill;
}

private: System::Void batreservationbutton_Click(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt64(numericUpDown1->Value);
    if (i <= 0) 
    {
        MessageBox:: Show("Please Enter Number Of Tickets"); 
    }
    else
    {
        if (batcombobox->SelectedIndex == 0)
        {
            comparison(2, 0, i);
        }
        else if (batcombobox->SelectedIndex == 1)
        {
            comparison(2, 1, i);
        }
        else if (batcombobox->SelectedIndex == 2)
        {
            comparison(2, 2, i);
        }
        else if (batcombobox->SelectedIndex == 3)
        {
            comparison(2, 3, i);
        }
    }
   
}

private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    reservationcompletepanel->Hide();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    party_is_full_panel->Hide();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void party_is_full_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    remender_ticket_panel->Hide();
    reservationcompletepanel->Show();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    reservationcompletepanel->Show();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    suggestionpanel->Hide();

}
private: System::Void button22_Click_1(System::Object^ sender, System::EventArgs^ e) {
    batuserbooking->Hide();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    spideruserbooking->Hide();
}

private: System::Void spiderbooking_Click(System::Object^ sender, System::EventArgs^ e) {
    spideruserbooking->Show();
    spideruserbooking->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt16(numericUpDown2->Value);
    totalprice2->Text = Convert::ToString(i * price) + " LE ";
}
private: System::Void screambooking_Click(System::Object^ sender, System::EventArgs^ e) {
    screamuserbooking->Show();
    screamuserbooking->Dock = System::Windows::Forms::DockStyle::Fill;

}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
    screamuserbooking->Hide();
}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt16(numericUpDown3->Value);
    totalprice3->Text = Convert::ToString(i * price) + " LE ";
}
private: System::Void screamreservationbutton_Click_1(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt64(numericUpDown3->Value);
    if (i <= 0)
    {
        MessageBox::Show("Please Enter Number Of Tickets");
    }
    else
    {
        if (screamcomboBox->SelectedIndex == 0)
        {
            comparison(5, 0, i);
        }
        else if (screamcomboBox->SelectedIndex == 1)
        {
            comparison(5, 1, i);
        }
        else if (screamcomboBox->SelectedIndex == 2)
        {
            comparison(5, 2, i);
        }
        else if (screamcomboBox->SelectedIndex == 3)
        {
            comparison(5, 3, i);
        }
        else if (screamcomboBox->SelectedIndex == 4)
        {
            comparison(5, 4, i);
        }
        else if (screamcomboBox->SelectedIndex == 5)
        {
            comparison(5, 5, i);
        }
    }
}
private: System::Void spiderreservationbutton_Click_1(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt64(numericUpDown2->Value);
    if (i <= 0)
    {
        MessageBox::Show("Please Enter Number Of Tickets");
    }
    else
    {
        if (spidercomboBox->SelectedIndex == 0)
        {
            comparison(1, 0, i);
        }
        else if (spidercomboBox->SelectedIndex == 1)
        {
            comparison(1, 1, i);
        }
        else if (spidercomboBox->SelectedIndex == 2)
        {
            comparison(1, 2, i);
        }
        else if (spidercomboBox->SelectedIndex == 3)
        {
            comparison(1, 3, i);
        }
    }
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
    reduserbooking->Hide();
}
private: System::Void redreservationbutton_Click(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt64(numericUpDown4->Value);
    if (i <= 0)
    {
        MessageBox::Show("Please Enter Number Of Tickets");
    }
    else
    {
        if (redcomboBox->SelectedIndex == 0)
        {
            comparison(3, 0, i);
        }
        else if (redcomboBox->SelectedIndex == 1)
        {
            comparison(3, 1, i);
        }
        else if (redcomboBox->SelectedIndex == 2)
        {
            comparison(3, 2, i);
        }
        else if (redcomboBox->SelectedIndex == 3)
        {
            comparison(3, 3, i);
        }
        else if (redcomboBox->SelectedIndex == 4)
        {
            comparison(3, 4, i);
        }
        else if (redcomboBox->SelectedIndex == 5)
        {
            comparison(3, 5, i);
        }
    }
}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt16(numericUpDown4->Value);
    totalprice4->Text = Convert::ToString(i * price) + " LE ";
}
private: System::Void redbooking_Click(System::Object^ sender, System::EventArgs^ e) {
    reduserbooking->Show();
    reduserbooking->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
    encantouserbooking->Hide();
}
private: System::Void encantoreservationbutton_Click(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt64(numericUpDown5->Value); if (i <= 0)
    {
        MessageBox::Show("Please Enter Number Of Tickets");
    }
    else
    {
        if (encantocomboBox->SelectedIndex == 0)
        {
            comparison(4, 0, i);
        }
        else if (encantocomboBox->SelectedIndex == 1)
        {
            comparison(4, 1, i);
        }
        else if (encantocomboBox->SelectedIndex == 2)
        {
            comparison(4, 2, i);
        }
        else if (encantocomboBox->SelectedIndex == 3)
        {
            comparison(4, 3, i);
        }
        else if (encantocomboBox->SelectedIndex == 4)
        {
            comparison(4, 4, i);
        }
        else if (encantocomboBox->SelectedIndex == 5)
        {
            comparison(4, 5, i);
        }
    }
}
private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    int i = Convert::ToInt16(numericUpDown5->Value);
    totalprice5->Text = Convert::ToString(i * price) + " LE ";
}
private: System::Void encantobooking_Click(System::Object^ sender, System::EventArgs^ e) {
    encantouserbooking->Show();
    encantouserbooking->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void screamcomboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void totalprice5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("Booking Is Completed");
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void About_Click(System::Object^ sender, System::EventArgs^ e) {
    title->Hide();
    aboutuspanel->Show();
    aboutuspanel->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
    aboutuspanel->Hide();
    title->Show();
}
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
};
}
