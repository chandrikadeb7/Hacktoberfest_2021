import java.util.*;
import java.io.*;
import java.lang.*;

class Node
{
	int data;
	Node left, right;
	Node(int d)
	{
		data = d;
		left = right = null;
	}
}
class Roof_To_Leaf_Paths_Having_Equal_Length
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n = sc.nextInt();
			HashMap<Integer, Node> hm = new HashMap<Integer,Node>();
			Node root = null;
			while(n>0)
			{
				int n1 = sc.nextInt();
				int n2 = sc.nextInt();
				char ch = sc.next().charAt(0);
				
				Node parent = hm.get(n1);
				if(parent == null)
				{
					parent = new Node(n1);
					hm.put(n1,parent);
					if(root == null)
					{
						root = parent;
					}
				}
				
				Node child = new Node(n2);
				if(ch == 'L')
					parent.left = child;
				else 
					parent.right = child;
				
				hm.put(n2,child);
				
			n--;
			}
				
				GfG g = new GfG();
				g.countPaths(root);
				System.out.println();
				
		t--;
		}
	}
}



class GfG
{
    void help(Node*root,map<int,int> &m,int d)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        m[d]++;
    }
    help(root->left,m,d+1);
    help(root->right,m,d+1);
}
void pathCounts(Node *root)
{
    map<int,int> m;
    help(root,m,1);
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<" $";
    }
}
}
