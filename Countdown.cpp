#include<simplecpp>
#include<cstdlib>
main_program{
    initCanvas("Countdown", 1000,650);
    {//Location and Time Display
        string t="Kapustin Yar,", t1="";
        for (unsigned int i = 0; i < t.length(); i++) {
            t1+=t[i];
            Text head(500,323 - textHeight(),t1);
            wait(0.1);

            if (t1=="Kapustin Yar,"){
                string t2="Astrakhan Oblast, Russia", t3="";
                for (unsigned int i = 0; i < t2.length(); i++) {
                    t3+=t2[i];
                    Text mid(500,(325) ,t3);
                    wait(0.1);

                    if (t3=="Astrakhan Oblast, Russia"){
                        string t4="April 19, 1975", t5="";
                        for (unsigned int i = 0; i < t4.length(); i++) {
                            t5+=t4[i];
                            Text mid(500,(327 + textHeight()) ,t5);
                            wait(0.1);

                            if (t5=="April 19, 1975") wait(2);
                    }
                }
                }
            }
        }
    }

    {// Graphics

        //background
        Rectangle sky(500,325,1000,650), ground(500,610,1000,80),ground2(500,560,1000,20);
        sky.setColor(COLOR(20,150,200)); ground.setColor(COLOR(90,50,21)); ground2.setColor(COLOR(90,70,21));
        sky.setFill(); ground.setFill(); ground2.setFill();

        //Cloud 1
        Circle C1_1(800,60,30), C1_2(760,57,20), C1_3(745,60,10), C1_4(825,70,25), C1_5(850,55,20), C1_6(875,45,7);
        C1_1.setColor(COLOR(250,240,250)); C1_1.setFill();
        C1_2.setColor(COLOR(250,240,250)); C1_2.setFill();
        C1_3.setColor(COLOR(250,240,250)); C1_3.setFill();
        C1_4.setColor(COLOR(250,240,250)); C1_4.setFill();
        C1_5.setColor(COLOR(250,240,250)); C1_5.setFill();
        C1_6.setColor(COLOR(250,240,250)); C1_6.setFill();

        //Cloud 2
        Circle C2_1(300,140,30), C2_2(260,137,20), C2_3(245,140,10), C2_4(325,150,25), C2_5(350,135,20), C2_6(375,125,7);
        C2_1.setColor(COLOR(250,240,250)); C2_1.setFill();
        C2_2.setColor(COLOR(250,240,250)); C2_2.setFill();
        C2_3.setColor(COLOR(250,240,250)); C2_3.setFill();
        C2_4.setColor(COLOR(250,240,250)); C2_4.setFill();
        C2_5.setColor(COLOR(250,240,250)); C2_5.setFill();
        C2_6.setColor(COLOR(250,240,250)); C2_6.setFill();

        //Cloud 3
        Circle C3_1(600,360-650,30), C3_2(560,357-650,20), C3_3(545,360-650,10), C3_4(625,370-650,25), C3_5(650,355-650,20), C3_6(675,345-650,7);
        C3_1.setColor(COLOR(250,240,250)); C3_1.setFill();
        C3_2.setColor(COLOR(250,240,250)); C3_2.setFill();
        C3_3.setColor(COLOR(250,240,250)); C3_3.setFill();
        C3_4.setColor(COLOR(250,240,250)); C3_4.setFill();
        C3_5.setColor(COLOR(250,240,250)); C3_5.setFill();
        C3_6.setColor(COLOR(250,240,250)); C3_6.setFill();

        //Cloud 4
        Circle C4_1(400,360-1050,30), C4_2(360,357-1050,20), C4_3(345,360-1050,10), C4_4(425,370-1050,25), C4_5(450,355-1050,20), C4_6(475,345-1050,7);
        C4_1.setColor(COLOR(250,240,250)); C4_1.setFill();
        C4_2.setColor(COLOR(250,240,250)); C4_2.setFill();
        C4_3.setColor(COLOR(250,240,250)); C4_3.setFill();
        C4_4.setColor(COLOR(250,240,250)); C4_4.setFill();
        C4_5.setColor(COLOR(250,240,250)); C4_5.setFill();
        C4_6.setColor(COLOR(250,240,250)); C4_6.setFill();

        //Cloud 5
        Circle C5_1(800,60-2700,30), C5_2(760,57-2700,20), C5_3(745,60-2700,10), C5_4(825,70-2700,25), C5_5(850,55-2700,20), C5_6(875,45-2700,7);
        C5_1.setColor(COLOR(250,240,250)); C5_1.setFill();
        C5_2.setColor(COLOR(250,240,250)); C5_2.setFill();
        C5_3.setColor(COLOR(250,240,250)); C5_3.setFill();
        C5_4.setColor(COLOR(250,240,250)); C5_4.setFill();
        C5_5.setColor(COLOR(250,240,250)); C5_5.setFill();
        C5_6.setColor(COLOR(250,240,250)); C5_6.setFill();


        //launcher
        Rectangle holder1(450,400,100,30), holder2(450,535,100,30), holder1O(450,400,100,30), holder2O(450,535,100,30),pole(400,425,50,250), poleO(400,425,50,250);
        pole.setColor(COLOR(230,60,60));holder1.setColor(COLOR(230,60,60));holder2.setColor(COLOR(230,60,60));
        pole.setFill();holder1.setFill(); holder2.setFill();

        //flame
        Circle flameY(500,540,36.4), flameO(500,540,30), flameR(500,540, 22);
        flameY.setColor(COLOR(200,195,33)); flameO.setColor(COLOR(221,150,34)); flameR.setColor(COLOR(225,100,33));
        flameY.setFill(); flameO.setFill(); flameR.setFill();
        flameR.hide(); flameO.hide(); flameY.hide();

        //rocket shapes
        Rectangle  pin(500,345,5,40), pinO(500,345,5,40);
        Circle mid(500,450,35), midO(500,450,35), head(500,370,25), headO(500,370,25);
        Rectangle fin(500,535,100,30), finO(500,535,100,30),  body(500,500,70,100), bodyO(500,500,70,100 ), top(500,398.26,50,56.7), topO(500,398.26,50,56.7);
        Circle glassB(500,490,22), glass(500,490,18), glassBO(500,490,22), glassO(500,490,18);
        //rocket colors
        pin.setColor(COLOR(110,130,120)); body.setColor(COLOR(110,130,120)); top.setColor(COLOR(110,130,120)); mid.setColor(COLOR(110,130,120)); head.setColor(COLOR(110,130,120));
        pin.setFill(); body.setFill(); top.setFill(); mid.setFill(); head.setFill();
        fin.setColor(COLOR(200,40,40)); fin.setFill();
        glass.setColor(COLOR(20,100,140)); glassB.setColor(COLOR(10,50,80));
        glass.setFill(); glassB.setFill();

        //moon
        Circle white(850,-60, 60), spot1(825,-70,7),spot2(870, -23, 10), spot3(830, -25, 6);
        white.setColor(COLOR(222,222,222)); spot1.setColor(COLOR(100,100,100)); spot3.setColor(COLOR(100,100,100));spot2.setColor(COLOR(100,100,100));
        white.setFill(); spot1.setFill(); spot2.setFill(); spot3.setFill();


        {//Countdown
            int num=11;
            Rectangle box(500,50,200,30);
            box.setColor(COLOR(255,255,255));
            box.setFill();
            repeat(12){
                if (num==11){
                    wait(1);

                    Text countdown(500,50,"Aryabhatta Satellite Mission");
                    num--;
                    wait (2);
                }else if(num>0){
                    Text countdown(500,50,num);
                    num--;
                    wait (1);
                }else {
                    Text countdown(500,50,"Launch!");
                    wait(1);
                }
            }

        }

        flameY.show(); flameO.show(); flameR.show();

        float a=10000,v=5,t=0.01;
        int counter=0;
        repeat(100){
            int para=rand()%11 - 5;
            flameO.moveTo(500,540+para);
            flameY.moveTo(500,540+para);
            flameR.moveTo(500,540+para);
            v=v+a*t;
            holder1.move(0,v*t); holder2.move(0,v*t); holder1O.move(0,v*t); holder2O.move(0,v*t);
            pole.move(0,v*t); poleO.move(0,v*t); ground.move(0,v*t); ground2.move(0,v*t);
            int u=v/2;

            C1_3.move(3*para,u*t);
            C1_6.move(3*para,u*t);
            C1_2.move(3*para,u*t);
            C1_5.move(3*para,u*t);
            C1_1.move(3*para,u*t);
            C1_4.move(3*para,u*t);


            C2_3.move(-3*para*pow(-1,para),u*t);
            C2_6.move(-3*para*pow(-1,para),u*t);
            C2_2.move(-3*para*pow(-1,para),u*t);
            C2_5.move(-3*para*pow(-1,para),u*t);
            C2_1.move(-3*para*pow(-1,para),u*t);
            C2_4.move(-3*para*pow(-1,para),u*t);

            C3_3.move(-3*para,u*t);
            C3_6.move(-3*para,u*t);
            C3_2.move(-3*para,u*t);
            C3_5.move(-3*para,u*t);
            C3_1.move(-3*para,u*t);
            C3_4.move(-3*para,u*t);

            C4_3.move(-3*para*pow(-1,para),u*t);
            C4_6.move(-3*para*pow(-1,para),u*t);
            C4_2.move(-3*para*pow(-1,para),u*t);
            C4_5.move(-3*para*pow(-1,para),u*t);
            C4_1.move(-3*para*pow(-1,para),u*t);
            C4_4.move(-3*para*pow(-1,para),u*t);

            C5_3.move(3*para,u*t);
            C5_6.move(3*para,u*t);
            C5_2.move(3*para,u*t);
            C5_5.move(3*para,u*t);
            C5_1.move(3*para,u*t);
            C5_4.move(3*para,u*t);





            sky.setColor(COLOR(20-counter/5 ,150-15*counter/10, 200-15*counter/8));
            counter++;
            wait(t);
        }
        int i=0;
        repeat(5){
            i--;
            flameR.scale(pow(1.1,i));
            flameO.scale(pow(1.1,i));
            flameY.scale(pow(1.1,i));
            white.move(0,25); spot1.move(0,25); spot2.move(0,25); spot3.move(0,25);
            wait(0.5);
        }
        flameR.hide(); flameY.hide(); flameO.hide();


        wait (10);


    }




}
