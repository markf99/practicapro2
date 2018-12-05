include "cluster.hh"
include "BinTree.hh"


BinTree<int> cluster::cluster(){
	BinTree<int> cluster;
	return cluster;
	}

BinTree<int> cluster::configurar_cluster(int k, BinTree<int>& a){
	return BinTree<int>(a.value(), configurar_cluster(,a.left()), configurar_cluster(,a.right()))
}

BinTree<int> cluster::configurar_cluster(int k){
	BinTree<int> cluster;
	if(k=0) return cluster;
	else {

		configurar_cluster(k-1)
	}
	return BinTree<int>(a.value(), configurar_cluster(,a.left()), configurar_cluster(,a.right()))
}

void cluster::configurar_cluster(int k){

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