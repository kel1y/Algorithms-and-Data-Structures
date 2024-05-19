// Declaring an array
int sum[1<<N];

// initialize array with values
for (int s = 0; s < (1<<n); s++) {
sum[s] = value[s];
}

// filling the array
for (int k = 0; k < n; k++) {
for (int s = 0; s < (1<<n); s++) {
if (s&(1<<k)) sum[s] += sum[s^(1<<k)];
}
}