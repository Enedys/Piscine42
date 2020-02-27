#!/usr/bin/perl
# добавлена 4 переменная argv - имя файла!
use warnings;
use strict;

die "program x y density filename" unless (scalar(@ARGV) == 4);

my ($x, $y, $density, $filename) = @ARGV;

open(FH, '>', $filename) or die "failed to open ${filename} $!\n";
print "File stream succesfully initiated. Stand by...\n";

print "$y.ox\n";
print FH "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	    for (my $j = 0; $j < $x; $j++) 
		{
			if (int(rand($y) * 2) < $density) 
			{
				print "o";
				print FH "o";
			}
			else 
			{
			print ".";
			print FH ".";
			}
		}
		print "\n"; 
		print FH "\n";
		}

close (FH);
print "File stream succesfully closed. Check out your file!\n";
