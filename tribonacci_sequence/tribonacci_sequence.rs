use std::cmp;
use std::iter;

struct Trib {
    signature: [f64; 3]
}

impl Iterator for Trib {
    type Item = f64;
    fn next(&mut self) -> Option<f64> {
        let k = self.signature[0] + self.signature[1] + self.signature[2];
        self.signature[0] = self.signature[1];
        self.signature[1] = self.signature[2];
        self.signature[2] = k;
        Some(k)
    }
}

fn tribonacci(signature: &[f64; 3], n: usize) -> Vec<f64> {
    let trib_gen = Trib{signature: *signature};
    signature.iter().cloned().chain(trib_gen).take(n).collect()   
}