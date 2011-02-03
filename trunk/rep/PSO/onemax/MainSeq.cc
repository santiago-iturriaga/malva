#include "PSO.hh"

int main (int argc, char** argv)
{
	using skeleton PSO;

	//system("clear");

	if(argc < 4)
		show_message(1);

	ifstream f1(argv[1]);
	if (!f1) show_message(11);

	ifstream f2(argv[2]);
	if (!f2) show_message(12);

	Problem pbm;
	f2 >> pbm;

	SetUpParams cfg;
	f1 >> cfg;

	Solver_Seq solver(pbm,cfg);
	solver.run(); /* number of evaluations */

	if (solver.pid()==0)
	{
		solver.show_state();
		cout << "Solution: " << solver.global_best_solution() << endl
		     << " Fitness: " << solver.global_best_solution().fitness() << endl;
		cout << "\n\n :( ---------------------- THE END --------------- :) ";
		cout << endl;
		ofstream fexit(argv[3]);
		if(!fexit) show_message(13);
		fexit << solver.userstatistics();

	}
	return(0);
}
