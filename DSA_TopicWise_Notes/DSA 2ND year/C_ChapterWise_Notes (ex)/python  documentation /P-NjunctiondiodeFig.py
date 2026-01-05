import numpy as np
import matplotlib.pyplot as plt

# Constants
thermal_voltage = 0.025  # Thermal voltage in volts (approximately 25 mV at room temperature)

# Define the diode current function for forward bias
def diode_current(v, Is=1e-12, Vt=thermal_voltage):
    return Is * (np.exp(v / Vt) - 1)

# Voltage ranges
forward_voltages = np.linspace(0, 1, 500)  # Forward bias voltages from 0V to 1V
reverse_voltages = np.linspace(-0.1, 0, 500)  # Reverse bias voltages from -0.1V to 0V

# Calculate currents
forward_currents = diode_current(forward_voltages)
reverse_currents = np.zeros_like(reverse_voltages)  # Assume negligible reverse current

# Plotting
plt.figure(figsize=(20, 60))

# Forward bias region
plt.plot(forward_voltages, forward_currents, label='Forward Bias', color='blue')

# Reverse bias region
plt.plot(reverse_voltages, reverse_currents, label='Reverse Bias', color='red')

plt.yscale('log')  # Log scale for better visualization of the exponential increase
plt.xlabel('Voltage (V)')
plt.ylabel('Current (A)')
plt.title('V-I Characteristics of a P-N Junction Diode')
plt.grid(True, which='both', linestyle='--', linewidth=0.5)
plt.legend()
plt.show()