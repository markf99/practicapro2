include "cluster.hh"
include "processor.hh"


cluster::cluster(){
	moment_actual = 0;
	}

void cluster::configurar_cluster(vector<int>& nodes, vector<int>& memories){
	int i = 0;
	processor raiz = read_tree(nodes, memories, i);
	processor arrel = raiz;
}

processor cluster::read_tree(const vector<int>& nodes, const vector<int>& memories, int& i){
	processor left = NULL;
	processor right = NULL;
	processor p_return = NULL;
	if (nodes[i] != 0){
		p_return = processor(nodes[i], memories[nodes[i]-1]);
		i++;
		processor left = read_tree(nodes, memories, i);
		processor right = read_tree(nodes, memories, i);
		p_return.add_left_proc(left);
		p_return.add_right_proc(right);
	}else{
		i++;
	}

	return p_return;
}


/*
BinTree<int> cluster::configurar_cluster(int k){
	BinTree<int> cluster;
	if(k=0) return cluster;
	else {

		configurar_cluster(k-1)
	}
	return BinTree<int>(a.value(), configurar_cluster(,a.left()), configurar_cluster(,a.right()))
}

BinTree<int> cluster::build_tree(){
	int n;
	cin>>n;
	BinTree<int> t,l,r;
	if(n!=0){
		l=build_tree();
		r=build_tree();
		t= BinTree<int>(n,l,r);
	}
	return t;
} 
*/