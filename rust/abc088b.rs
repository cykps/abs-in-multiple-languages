use proconio::input;

fn main() {
	input! {
		n: u64,
    mut a: [u64; n]
  };
  a.sort();
  let mut al:u64 = 0;
  let mut bo:u64 = 0;
  for (i, &b) in a.iter().rev().enumerate() {
    if i%2 == 0 {
      al += b;
    } else {
      bo += b;
    }
  };
  println!("{}", al-bo);
}
