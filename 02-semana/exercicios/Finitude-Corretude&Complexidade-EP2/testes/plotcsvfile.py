import matplotlib.pyplot as plt 
import csv 
  
x = [] 
y = [] 

executable = "selectionsort"
executables = ["selectionsort", "bubblesort", "insertionsort"]

#cenário de teste
cenario = "casomedio" #piorcaso/casomedio/melhorcaso
cenarios = ["piorcaso", "casomedio", "melhorcaso"]

for executable in executables:
    for cenario in cenarios:
        x = [] 
        y = []
        y2 = []
        y3 = []
        with open(executable+'_average_times_'+cenario+'.csv','r') as csvfile: 
            lines = csv.reader(csvfile, delimiter=',') 
            for row in lines: 
                x.append(int(row[0])) 
                y.append(float(row[1])* 10000) 
        
        
        '''
        for entrada in x:
            y2.append(int(entrada * entrada))
        
        for entrada in x:
            y3.append(int(entrada))

        if( cenario=="melhorcaso" and executable=="insertionsort"):
               plt.plot(x, y3, label='y=x', color='r')
        else:
            plt.plot(x, y2, label='y=x**2', color='g')
        '''

        plt.plot(x, y, color = 'b', linestyle = 'solid', 
                marker = 'o',label = executable+"-"+cenario) 
        
        plt.autoscale()

        x_padding = (max(x) - min(x)) * 0.1  # 10% padding
        y_padding = (max(y) - min(y)) * 0.1

        plt.xlim(min(x) - x_padding, max(x) + x_padding)
        plt.ylim(min(y) - y_padding, max(y) + y_padding)

        plt.xlabel('tamanho da entrada') 
        plt.ylabel('tempo de execução(em segundos) * 10000') 
        plt.title('tamanho de entrada VS tempo de execução', fontsize = 12) 
        plt.grid() 
        plt.legend() 
        plt.show()