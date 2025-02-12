import subprocess
import time
import csv

# executables names
executables = ["selectionsort", "bubblesort", "insertionsort"]

# Path to your C program's executable
executable = "selectionsort"
path = "./"+executable

#cenário de teste
cenarios_dir ="./input/"
cenarios = ["piorcaso", "casomedio", "melhorcaso"]
cenario = "casomedio" #piorcaso/casomedio/melhorcaso

# Number of repetitions
num_repetitions = 5

# Delay in seconds between repetitions
delay_seconds = 0

# Dictionary to store average execution times for each file
average_times_per_file = {}

# Menansure execution time for each "sort algorithm"
for executable in executables:
    path = "./"+executable
    print("***** Algorithm: "+ executable+ " ***** ")
    #Meansure executio time for each cenario
    for cenario in cenarios:
        average_times_per_file = {}  # Reset for each scenario

        #output file name
        output_csv = executable+"_average_times_"+cenario+".csv"

        # List of input files
        input_files = [ cenario+"1k.txt", cenario+"2k.txt", cenario+"3k.txt",
                        cenario+"4k.txt", cenario+"5k.txt", cenario+"6k.txt",
                        cenario+"7k.txt", cenario+"8k.txt", cenario+"9k.txt",
                        cenario+"10k.txt", cenario+"20k.txt", cenario+"30k.txt",
                        cenario+"40k.txt", cenario+"50k.txt", cenario+"60k.txt",
                        cenario+"70k.txt", cenario+"80k.txt", cenario+"90k.txt",
                        cenario+"100k.txt"
                        ]

        # Dicionario de tamanho da entrada
        quantidadedict = {cenario+"1k.txt":1000, cenario+"2k.txt":2000, cenario+"3k.txt":3000,
                        cenario+"4k.txt":4000, cenario+"5k.txt":5000, cenario+"6k.txt":6000,
                        cenario+"7k.txt":7000, cenario+"8k.txt":8000, cenario+"9k.txt":9000,
                        cenario+"10k.txt":10000, cenario+"20k.txt":20000, cenario+"30k.txt":30000,
                        cenario+"40k.txt":40000, cenario+"50k.txt":50000, cenario+"60k.txt":60000,
                        cenario+"70k.txt":70000, cenario+"80k.txt":80000, cenario+"90k.txt":90000,
                        cenario+"100k.txt":100000
                        }
        # Measure execution time for each file
        for input_file in input_files:
            total_time = 0.0  # Reset total time for each file
            
            print(f"\nProcessing file: {input_file}")
            
            for repetition in range(num_repetitions):
                try:
                    with open(cenarios_dir+input_file, "r") as infile:
                        start_time = time.perf_counter()
                        subprocess.run([path], stdin=infile, check=True)
                        end_time = time.perf_counter()

                        # Calculate execution time for this repetition
                        execution_time = end_time - start_time
                        total_time += execution_time

                        #print(f"  Run {repetition + 1}: {execution_time:.4f} seconds")

                    # Delay before the next repetition
                    if repetition < num_repetitions - 1:  # Avoid delay after the last repetition
                        time.sleep(delay_seconds)

                except subprocess.CalledProcessError as e:
                    print(f"  Error during run {repetition + 1}: {e}")
                except FileNotFoundError:
                    print(f"  Input file {input_file} not found.")
                    break
            
            # Calculate and store average time for the current file
            if total_time > 0:
                average_time = total_time / num_repetitions
                average_times_per_file[input_file] = average_time
                print(f"Average time for {input_file}: {average_time:.4f} seconds")

        # Write results to CSV
        with open(output_csv, mode="w", newline="") as csvfile:
            csv_writer = csv.writer(csvfile)
            #csv_writer.writerow(["Input File", "Average Time (seconds)"])
            for file, avg_time in average_times_per_file.items():
                csv_writer.writerow([quantidadedict[file], f"{avg_time:.4f}"])

        print(f"\nAverage times have been written to {output_csv}")
        quantidadedict.clear()