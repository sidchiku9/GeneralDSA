int main()

   {

       pid_t child;

       int status;

       child = fork();

       switch(child){

           case -1 ;

               perror("fork");

               exit(1);

           case 0 :

               printf("%d\n",getppid());

               break;

           default :

               printf("%d\n",getpid());

               wait(&status);

               break;

        }

        return 0;

   }