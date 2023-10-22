class Node< D >implements Cloneable
{
	Integer keyM;
	D itemM;
	Node <D>nextM;
	public Node(){
		keyM = itmeM = nextM = null;
	}
	
	public Node(D itemA, Integer keyA, Node < D> nextA)
	{
		itemM = itemA;
		keyM = keyA;
		nextM = nextA;
	}
}
