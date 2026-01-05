import numpy as np
import matplotlib.pyplot as plt

# Parameters
diode_forward_voltage = 0.7  # Forward voltage drop of the diode (in volts)

# Input voltage range (from -10V to +10V)
input_voltage = np.linspace(-10, 10, 1000)

# Output voltage based on the series negative clipper operation
output_voltage = np.where(input_voltage >= 0, input_voltage - diode_forward_voltage, 0)

# Plotting the transfer characteristics
plt.figure(figsize=(10, 6))
plt.plot(input_voltage, output_voltage, label='Transfer Characteristics', color='red')

# Highlight the regions for clarity
plt.axvline(0, color='black', linestyle='--', linewidth=0.5)  # V_in = 0
plt.axhline(0, color='black', linestyle='--', linewidth=0.5)  # V_out = 0

plt.title('Transfer Characteristics of Series Negative Clipper')
plt.xlabel('Input Voltage (V_in)')
plt.ylabel('Output Voltage (V_out)')
plt.legend()
plt.grid(True)
plt.show()