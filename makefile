manger.o :
	make -C ./Manger_couse/
	make -C ./Manger_stu/
	make -C ./Manger_log/
	make -C ./Manger_enter/
	gcc main.c -o manger -L ./Release/ -l manger -l couse_manger -l stu_manger -l log_manger -I ./Include
