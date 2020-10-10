import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.Random;
/*<applet code="Mind_Reading_Game" width=500 height=500>
</applet>*/
public class Mind_Reading_Game extends JApplet implements MouseListener
{       int x,y,x2,y2,i,v,f;
        String s[]={"%","‡","#","$","&","∂","ß","¢","§","•","¥","π","©","Ø","µ","∆","¿","◊","M","R","C"};
        String a;
        private JPanel panel;
        public void init()
        { addMouseListener(this);
          requestFocus();
          y2=25;
          Random r=new Random();
          v=r.nextInt(21);
          a=s[v];
          panel = new JPanel()
          { protected void paintComponent(Graphics g)
            { super.paintComponent(g);
              try
              { setBackground(Color.white);
                Font fobj=new Font("Arial",Font.BOLD,24);
                Font fobj1=new Font("Arial",Font.BOLD,14);
                Font fobj2=new Font("Arial",Font.BOLD,44);
                Color cobj=new Color(101,80,33);
                Color cobj1=new Color(136,107,47);
                g.setFont(fobj);
                g.drawString("MIND",290,50);
                g.drawString("READING",270,90);
                g.drawString("COOKIE",280,130);
                g.setColor(cobj);
                g.fillOval(275,165,110,110);
                g.setColor(cobj1);
                g.fillOval(280,170,100,100);
                g.setColor(Color.gray);
                g.fillRect(280,310,100,50);
                g.setColor(Color.black);
                g.drawRect(279,309,101,51);
                g.setFont(fobj1);
                g.drawString("Instriuctions",290,325);
                g.drawString("READ FIRST",290,345);
                x2=20;
                if(x>=270&&x<=370&&y>=170&&y<=270)
                { g.setFont(fobj2);
                  g.drawString(""+a,315,230);
                  f=1;
                }
                if(f==0)
                { for(i=1;i<26;i++)
                  { g.drawString(""+i+"=",x2,y2);
                    if(i!=1&&i!=9&&i!=18)
                    { Random r=new Random();
                      v=r.nextInt(21);
                      g.drawString(""+s[v],x2+30,y2);
                    }
                    else
                    g.drawString(""+a,x2+30,y2);
                    y2=y2+15;
                  }
                  if(i==26)
                  { y2=25;
                    x2=80;
                  }
                  for(i=26;i<51;i++)
                  { g.drawString(""+i+"=",x2,y2);
                    if(i!=27&&i!=36&&i!=45)
                    { Random r=new Random();
                      v=r.nextInt(21);
                      g.drawString(""+s[v],x2+30,y2);
                    }
                    else
                    g.drawString(""+a,x2+30,y2);
                    y2=y2+15;
                  }
                  if(i==51)
                  { y2=25;
                    x2=140;
                  }
                  for(i=51;i<76;i++)
                  { g.drawString(""+i+"=",x2,y2);
                    if(i!=54&&i!=63&&i!=72)
                    { Random r=new Random();
                      v=r.nextInt(21);
                      g.drawString(""+s[v],x2+30,y2);
                    }
                    else
                    g.drawString(""+a,x2+30,y2);
                    y2=y2+15;
                  }
                  if(i==76)
                  { y2=25;
                    x2=200;
                  }
                  for(i=76;i<100;i++)
                  { g.drawString(""+i+"=",x2,y2);
                    if(i!=81&&i!=99)
                    { Random r=new Random();
                      v=r.nextInt(21);
                     g.drawString(""+s[v],x2+30,y2);
                    }
                    else
                    g.drawString(""+a,x2+30,y2);
                    y2=y2+15;
                  }
                  if(i==100)
                  { y2=25;
                    x2=260;
                  }
                }
              }
              catch(Exception e)
              {}
            }
          };
          add(panel);
        }
        public void mouseClicked(MouseEvent me)
        { x=me.getX();
          y=me.getY();
          if(x>=270&&x<=370&&y>=170&&y<=270)
          repaint();
        }
        public void mousePressed(MouseEvent me)
        {}
        public void mouseReleased(MouseEvent me)
        {}
        public void mouseEntered(MouseEvent me)
        {}
        public void mouseExited(MouseEvent me)
        {}
        public void paint(Graphics g)
        { super.paint(g);
          setSize(400,400);
        }
}