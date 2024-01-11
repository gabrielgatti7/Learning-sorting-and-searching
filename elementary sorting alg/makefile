selection:
	@rm *.o
	@gcc -c client.c select_sort.c
	@gcc -o prog *.o

insert:
	@rm *.o
	@gcc -c client.c insert_sort.c
	@gcc -o prog *.o

bubble:
	@rm *.o
	@gcc -c client.c bubble_sort.c
	@gcc -o prog *.o

nearly:
	@echo "---------1k---------\n"
	@./prog 1000 <in/nearly_sorted/1Knearly_sorted.txt
	@echo "---------10k---------\n"
	@./prog 10000 <in/nearly_sorted/10Knearly_sorted.txt
	@echo "---------100k---------\n"
	@./prog 100000 <in/nearly_sorted/100Knearly_sorted.txt

reverse:
	@echo "---------1k---------\n"
	@./prog 1000 <in/reverse_sorted/1Kreverse_sorted.txt
	@echo "---------10k---------\n"
	@./prog 10000 <in/reverse_sorted/10Kreverse_sorted.txt
	@echo "---------100k---------\n"
	@./prog 100000 <in/reverse_sorted/100Kreverse_sorted.txt

sorted:
	@echo "---------1k---------\n"
	@./prog 1000 <in/sorted/1Ksorted.txt
	@echo "---------10k---------\n"
	@./prog 10000 <in/sorted/10Ksorted.txt
	@echo "---------100k---------\n"
	@./prog 100000 <in/sorted/100Ksorted.txt

rand:
	@echo "---------1k---------\n"
	@./prog 1000 <in/unif_rand/1Kunif_rand.txt
	@echo "---------10k---------\n"
	@./prog 10000 <in/unif_rand/10Kunif_rand.txt
	@echo "---------100k---------\n"
	@./prog 100000 <in/unif_rand/100Kunif_rand.txt