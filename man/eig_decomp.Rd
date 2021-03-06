% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/eig_decomp.r
\name{eig_decomp}
\alias{eig_decomp}
\title{Fast eigen decomposition using ARPACK}
\usage{
eig_decomp(M, n_eigs, sym = isSymmetric(M))
}
\arguments{
\item{M}{A matrix (e.g. from the Matrix package)}

\item{n_eigs}{Number of eigenvectors to return}

\item{sym}{TRUE if M is symmetric}
}
\value{
n eigenvectors of the transition matrix
}
\description{
Fast eigen decomposition using ARPACK
}
\examples{
eig_decomp(cbind(c(1,-1), c(-1,1)), 2)

}
