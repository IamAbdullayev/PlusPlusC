for(int i = length - 1; i > 0; --i) {

			int temp = sequence[i];
			sequence[i] = sequence[i - 1];
			sequence[i - 1] = temp;

			cout << sequence[i] << " ";
		}